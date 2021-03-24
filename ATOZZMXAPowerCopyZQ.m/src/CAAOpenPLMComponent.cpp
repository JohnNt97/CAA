// COPYRIGHT DASSAULT SYSTEMES 2012

// CATPLMIntegrationAccess Framework
#include "CATIAdpEnvironment.h"
#include "CATAdpDictionaryServices.h"
#include "CATAdpAttributeSet.h"
#include "CATAdpQueryServices.h"
#include "CATAdpQueryResult.h"
#include "CATLISTP_CATAdpQueryResult.h"

// CATPLMIntegrationUse Framework
#include "CATAdpPLMQueryFilter.h"
#include "CATAdpPLMComponentsInfos.h"
#include "CATAdpPLMComponentsInfosIter.h"
#include "CATAdpPLMExtendedQueryServices.h"
#include "CATAdpPLMQueryAttributeSet.h"
#include "CATAdpPLMComponentInfos.h"
#include "CATAdpPLMComponentUniqueKey.h"
#include "CATAdpPLMQueryServices.h"
#include "CATAdpOpenParameters.h"
#include "CATAdpOpener.h"

//PLMDictionaryNavServices Framework
#include "CATCkePLMNavPublicServices.h"
#include "CATCkePLMNavCustoAccessPublicServices.h"
#include "CATListPtrCATIAdpPLMIdentificator.h"

//KnowledgeInterfaces Framework
#include "CATIType.h"

// CATPLMIntegrationAccess Framework
#include "CATAdpAttributeSet.h"

// CATPLMIdentificationAccess Framework
#include "CATIAdpPLMIdentificator.h"
// System
#include "CATString.h"
#include "CATListOfCATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATSysBoolean.h"
#include "CATBaseUnknown.h"
#include "CATLISTP_CATBaseUnknown.h"

#include "CAAOpenPLMComponent.h"
// Standard C++ library
#include "iostream.h"


HRESULT CAAOpenPLMComponent (const char* istrPLMType,
							 const CATUnicodeString& iPLM_ExternalIDValue,
							 const CATUnicodeString& iV_versionValue,
							 const IID& iIID,
							 void **opiPLMComp,
							 CATOmbLifeCycleRootsBag &iBag,
							 CATBoolean iExpandAll)
{
	// 1. Initialize the Return Value
	HRESULT hr = E_INVALIDARG;

	// 2. Build The Attribute Set
	CATAdpAttributeSet iAttributeSet;
	CATAdpPLMQueryAttributeSet iAttributeSetForFilter;

	CATUnicodeString V_versionName = CATCkePLMNavPublicServices::GetMajorRevisionAttributeName(NULL_var).ConvertToChar();

	// CATAdpAttributeSet is formed for the query by GetElementFromAttributes
	hr = iAttributeSet.AddAttribute("PLM_ExternalID",iPLM_ExternalIDValue);   
	hr = iAttributeSet.AddAttribute(V_versionName.ConvertToChar(),iV_versionValue);
	
	hr = iAttributeSetForFilter.AddStringAttribute("PLM_ExternalID",iPLM_ExternalIDValue);
	hr = iAttributeSetForFilter.AddStringAttribute(V_versionName.ConvertToChar(), iV_versionValue);


	// 3. Retrieve the Type by using the input String PLM Type
	CATIType_var spCATITypeOnPLMType ;
	CATBoolean bPLMType = FALSE;
	if (SUCCEEDED(hr))
	{
		hr = CATCkePLMNavPublicServices::RetrieveKnowledgeType(istrPLMType,spCATITypeOnPLMType);
		if ( NULL_var == spCATITypeOnPLMType)
		{
			hr = CATCkePLMNavCustoAccessPublicServices::RetrieveCustoType(istrPLMType,spCATITypeOnPLMType) ;
			if ( SUCCEEDED(hr) && (NULL_var != spCATITypeOnPLMType))
			{
				bPLMType = TRUE;
				cout<<"   Success CATCkePLMNavCustoAccessPublicServices::RetrieveCustoType "<< (spCATITypeOnPLMType->Name()).ConvertToChar() << endl;
			}
		}
		else
		{
			bPLMType = TRUE;
			cout<<"   Success CATCkePLMNavPublicAccessServices ::RetrieveKnowledgeType non custo type  "<< (spCATITypeOnPLMType->Name()).ConvertToChar() << endl;
		}  
	}
	if( bPLMType == FALSE)
		cout<<"   RetrieveCustoType AND RetrieveKnowledgeType are Failed, Invalid PLMType : Identify the Correct PLMType in Modeler"<<endl;

	
	// 4. Retrieve the Element From Database by using the PLM Type and Attribute Set
	CATBoolean bMultipleElementAttrSet = FALSE;
	CATBoolean bUniqueKeyDefOnObject = TRUE;
	CATBoolean bIsUnique = TRUE;
	CATBoolean bUniqueObjectFromKey = TRUE;
	CATBoolean bMultipleElementFromQuery = FALSE;
	CATAdpPLMComponentsInfos oComponentsInfos;

	CATIAdpPLMIdentificator *piIdentOnPLMComp = NULL;
	
	// 4.1. Create the Filter Consists of PLMType and Attribute Set
	CATAdpPLMQueryFilter iQueryFilter(spCATITypeOnPLMType,iAttributeSetForFilter);

	// 4.2. Retrieve the Element from Database By using Filter , If Multiple elements are retrieved then Query Fails
	if(SUCCEEDED(hr)) hr= CATAdpPLMExtendedQueryServices::GetElementsFromQueryFilter(iQueryFilter, oComponentsInfos);

	if(SUCCEEDED(hr) && oComponentsInfos.Size() != 0) 
	{
		if(oComponentsInfos.Size() != 1) 	
		{
			cout<<"\n\t GetElementsFromQueryFilter Returns Multiple Elements. Please Provide Attribute For Identifying the Unique object from Database. Use PLM_EXTERNAL ID + Version"<<endl;
			bMultipleElementAttrSet = TRUE;
		}
		// 4.3. Retrieve the Iterator for Attribute Set
		CATAdpPLMComponentsInfosIter iterator= oComponentsInfos.GetIterator();
		CATIAdpPLMIdentificator *oComponent = NULL;
		CATAdpPLMComponentInfos oInfos;
		CATAdpPLMComponentUniqueKey oUniqueKey;
		// 4.4. Retrieve the Attributes from iterator : Identificator of First PLM Object
		hr = iterator.NextInfos( oComponent,oInfos);

		// 4.5. Retrieve the Unique Key for PLM Object from Identificator
		if(SUCCEEDED(hr) && NULL != oComponent)  
			hr = CATAdpPLMQueryServices::GetUniqueKey(oComponent,oUniqueKey);

		if (NULL != oComponent)
		{ oComponent -> Release(); oComponent = NULL;} 

		if(FAILED(hr)) bUniqueKeyDefOnObject = FALSE;

		// 4.6. Display the Value of Unique Key
		CATUnicodeString oDisplayed;
		if(SUCCEEDED(hr))  hr = oUniqueKey. Display(oDisplayed);
		if(S_OK == hr)	 cout<<"\n\t Unique Key is :" <<oDisplayed.ConvertToChar()<<endl;

		// 4.7. Insure the Unicity of Unique Key
		if(SUCCEEDED(hr))  hr = oUniqueKey.UnicityGuarantee();

		if(S_OK == hr)   cout<<"\n\t Unicity Guranteed"<<endl;
		else 
		{
			cout<<"\n\t Unicity of Unique Key is not Guranteed"<<endl;
			bIsUnique = FALSE;
		}

		if( TRUE == bIsUnique)
		{
			CATListPtrCATIAdpPLMIdentificator oComponentsIdentifiers;
			// 4.8. Retrieve the Elements from Database by using Unique Key
			if(SUCCEEDED(hr))  hr = CATAdpPLMQueryServices::GetElementsByUniqueKey(oUniqueKey,oComponentsIdentifiers);
			// 4.9. If single element is retrieved return it, if mulitple elements are retrieved then Query Fails.
			if(SUCCEEDED(hr) && oComponentsIdentifiers.Size() != 0 )  piIdentOnPLMComp = oComponentsIdentifiers[1];
			else if (oComponentsIdentifiers.Size() != 1) 
			{
				cout<<"\n\t GetElementsByUniqueKey Returns Multiple Elements."<<endl;
				bUniqueObjectFromKey = FALSE;
			}
		}

		// 4.10. If unique Key is not implemented on the Object then Retrieve the Object By using GetElementFromAttributes
		CATListPtrCATAdpQueryResult opQueryResults;
		if(bUniqueKeyDefOnObject == FALSE || bIsUnique == FALSE) 
		{
			cout<<"\n\t Unique Key is not Defined on PLM Object or Unique Key is not Unique Use GetElementFromAttributes"<<endl;
			hr = CATAdpPLMQueryServices::GetElementsFromAttributes(spCATITypeOnPLMType, iAttributeSet, opQueryResults);
		}

		// 4.11. If multiple elements areretrieved by above query then Query Fails  Return the identifier for first Object only
		if(SUCCEEDED(hr)  && opQueryResults.Size() != 0)  
		{
			CATAdpQueryResult *res = opQueryResults[1];
			if (res)
			{
				res->GetIdentifier(piIdentOnPLMComp);
				delete res;
				res=NULL;
			}

			if(opQueryResults.Size() != 1)  
			{
				cout<<"\n\t\t GetElementFromAttributes Returns Mulitple Elements. Use Attributes which are unique"<<endl;
				bMultipleElementFromQuery = TRUE;
			}
		}
	}

	// 5. Open the Element in Session
	if(NULL != piIdentOnPLMComp)
	{	
		// 5.1. Create opener dpendening on the input mode
		if (TRUE == iExpandAll) 
		{
			CATAdpOpenParameters params_Auth(CATAdpExpandParameters::Authoring);
			CATAdpOpener opener_Auth(iBag,params_Auth);
			// 5.2. Open the Retrieved Component by using CATAdpOpener
			hr = opener_Auth.CompleteAndOpen(piIdentOnPLMComp,iIID,opiPLMComp);		     
		}
		else
		{
			CATAdpOpenParameters params_Nav(CATAdpExpandParameters::Navigation);
			CATAdpOpener opener_Nav(iBag,params_Nav);
			hr = opener_Nav.CompleteAndOpen(piIdentOnPLMComp,iIID,opiPLMComp);		
		} 
		piIdentOnPLMComp->Release();
		piIdentOnPLMComp = NULL;
	}


	// 5. Check for the Conditional Variable 
	if ( bPLMType == FALSE || bMultipleElementAttrSet == TRUE || bUniqueObjectFromKey == FALSE || bMultipleElementFromQuery == TRUE )
		hr = E_FAIL;

	return hr;
}
