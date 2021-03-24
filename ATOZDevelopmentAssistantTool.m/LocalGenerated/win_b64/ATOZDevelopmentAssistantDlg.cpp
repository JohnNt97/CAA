

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZDevelopmentAssistantDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgEditor.h"
#include "CATDlgPushButton.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgPushButton.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgPushButton.h"
#include "CATNavigation3DViewer.h"

// Begin of User Code

// End of User Code

ATOZDevelopmentAssistantDlg::ATOZDevelopmentAssistantDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
|CATDlgWndBtnOKCancelPreview
| CATDlgGridLayout
)
{

_Frame1 = NULL;
_Label1 = NULL;
_SelectorList = NULL;
_Editor = NULL;
_PushButton = NULL;
_Frame2 = NULL;
_Label2 = NULL;
_SelectorListTest = NULL;
_PushButtonTest = NULL;
_Label3 = NULL;
_SelectorMulti = NULL;
_Label4 = NULL;
_SelectorListTest2 = NULL;
_Frame3 = NULL;
_PushButtonFuncTest = NULL;
_Nav3DViewerModel = NULL;

// Begin of User Code

// End of User Code

}

ATOZDevelopmentAssistantDlg::~ATOZDevelopmentAssistantDlg()
{

// Begin of User Code

// End of User Code
_Frame1 = NULL;
_Label1 = NULL;
_SelectorList = NULL;
_Editor = NULL;
_PushButton = NULL;
_Frame2 = NULL;
_Label2 = NULL;
_SelectorListTest = NULL;
_PushButtonTest = NULL;
_Label3 = NULL;
_SelectorMulti = NULL;
_Label4 = NULL;
_SelectorListTest2 = NULL;
_Frame3 = NULL;
_PushButtonFuncTest = NULL;
_Nav3DViewerModel = NULL;

}



void ATOZDevelopmentAssistantDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_Frame1=new CATDlgFrame(this,(const char*)"Frame1",0|CATDlgGridLayout);
_Label1=new CATDlgLabel(_Frame1,(const char*)"Label1",0);
_SelectorList=new CATDlgSelectorList(_Frame1,(const char*)"SelectorList",0);
_Editor=new CATDlgEditor(_Frame1,(const char*)"Editor",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_PushButton=new CATDlgPushButton(_Frame1,(const char*)"PushButton",0);
_Frame2=new CATDlgFrame(this,(const char*)"Frame2",0|CATDlgGridLayout);
_Label2=new CATDlgLabel(_Frame2,(const char*)"Label2",0);
_SelectorListTest=new CATDlgSelectorList(_Frame2,(const char*)"SelectorListTest",0);
_PushButtonTest=new CATDlgPushButton(_Frame2,(const char*)"PushButtonTest",0);
_Label3=new CATDlgLabel(_Frame2,(const char*)"Label3",0);
_SelectorMulti=new CATDlgSelectorList(_Frame2,(const char*)"SelectorMulti",0|CATDlgLstMultisel);
_Label4=new CATDlgLabel(_Frame2,(const char*)"Label4",0);
_SelectorListTest2=new CATDlgSelectorList(_Frame2,(const char*)"SelectorListTest2",0);
_Frame3=new CATDlgFrame(this,(const char*)"Frame3",0|CATDlgGridLayout);
_PushButtonFuncTest=new CATDlgPushButton(_Frame3,(const char*)"PushButtonFuncTest",0);
_Nav3DViewerModel=new CATNavigation3DViewer(this,(const char*)"Nav3DViewerModel",
	0|CATDlgFraNoTitle|CATDlgFraNoFrame,300,400,0);
_Frame1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorList->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorList->SetVisibleTextHeight(1);
_SelectorList->SetVisibleTextWidth(12);
_Editor->SetGridConstraints(1,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_PushButton->SetGridConstraints(0,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Frame2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListTest->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTest->SetVisibleTextHeight(1);
_SelectorListTest->SetVisibleTextWidth(12);
_PushButtonTest->SetGridConstraints(0,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label3->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorMulti->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorMulti->SetVisibleTextHeight(1);
_SelectorMulti->SetVisibleTextWidth(12);
_Label4->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListTest2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTest2->SetVisibleTextHeight(1);
_SelectorListTest2->SetVisibleTextWidth(12);
_Frame3->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_PushButtonFuncTest->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Nav3DViewerModel->SetGridConstraints(0,1,1,3,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
