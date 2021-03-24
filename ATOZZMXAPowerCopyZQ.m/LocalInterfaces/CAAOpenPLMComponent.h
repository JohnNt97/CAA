#ifndef CAAOpenPLMComponent_H
#define CAAOpenPLMComponent_H

//COPYRIGHT DASSAULT SYSTEMES 2001


#include "CATUnicodeString.h"
#include "CATString.h" 
#include "IUnknown.h"
#include "CATSysBoolean.h"

class CATOmbLifeCycleRootsBag;

/**
 * Opens a Component.
 *  <br><b>Role</b>: This method opens any reference given its identifying attributes
 * (PLM_ExternalID, V_version) and PLMType. It returns the requested interface on the
 * reference. 
 * <br>This method proposes two choices:
 *  <ul>
 *   <li>default behavior: it retrieves and opens only the structure ( reference + instance) </li>
 *   <li>Expand All : It retrieves and opens: </li>
 *     <ul>
 *        <li>the structure ( reference + instance), </li>
 *        <li>all the representations (instance + reference (in Visu mode) ), </li>
 *        <li> all the Ports, and all the Connections</li>
 *  </ul>
 * </ul>
 * @param iStrPLMType [in]
 *   The String Representing PLMType for the reference to be opened
 * @param iPLM_ExternalIDValue [in]
 *   The PLM_ExternalID attribute value of the reference to be opened
 * @param V_versionValue [in]
 *   The V_version attribute value of the reference to be opened
 * @param iIID [in]
 *   The interface to be queried on the reference
 * @param opiProduct [out]
 *   The pointer to the requested interface on the reference
 * @ param iBag[in]
 *    The Object of Type CATOmbLifeCycleRootsBag for handling the Lifecycle
 * @param iExpandAll [in]
 *   Indicates whether all the components should be retrieved (TRUE)
 *   or only the ones forming the structure (FALSE).
 *   <br>If not specified only the structure will be retrieved.
 * @return
 *   <ul>
 *    <li><tt>S_OK</tt>: The reference was found and the interface returned</li>
 *    <li><tt>E_FAIL</tt>: The Reference was not found or Is not Unique in the connected Database</li>
 *    <li><tt>E_INVALIDARG</tt>: <tt>opiPLMComp</tt> is NULL</li>
 *   </ul>
 */
HRESULT CAAOpenPLMComponent (const char* istrPLMType,
		             const CATUnicodeString& iPLM_ExternalIDValue,
		             const CATUnicodeString& iV_versionValue,
		             const IID& iIID,
		             void **opiPLMComp,
		             CATOmbLifeCycleRootsBag &iBag,
		             CATBoolean iExpandAll = FALSE);

#endif

