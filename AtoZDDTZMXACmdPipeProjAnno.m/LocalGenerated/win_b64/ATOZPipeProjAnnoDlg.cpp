

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZPipeProjAnnoDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"

// Begin of User Code

// End of User Code

ATOZPipeProjAnnoDlg::ATOZPipeProjAnnoDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FramePipe = NULL;
_Label = NULL;
_SelectorListLine1 = NULL;
_Label4 = NULL;
_SelectorListLine2 = NULL;
_ButtonGenView = NULL;
_PushButtonBrowseView = NULL;
_FrameDrw = NULL;
_Label1 = NULL;
_SelectorListDrw = NULL;
_Label2 = NULL;
_SelectorListPipeProd = NULL;
_FrameList = NULL;
_ButtonOpen = NULL;
_PushButtonDelete = NULL;

// Begin of User Code

// End of User Code

}

ATOZPipeProjAnnoDlg::~ATOZPipeProjAnnoDlg()
{

// Begin of User Code

// End of User Code
_FramePipe = NULL;
_Label = NULL;
_SelectorListLine1 = NULL;
_Label4 = NULL;
_SelectorListLine2 = NULL;
_ButtonGenView = NULL;
_PushButtonBrowseView = NULL;
_FrameDrw = NULL;
_Label1 = NULL;
_SelectorListDrw = NULL;
_Label2 = NULL;
_SelectorListPipeProd = NULL;
_FrameList = NULL;
_ButtonOpen = NULL;
_PushButtonDelete = NULL;

}



void ATOZPipeProjAnnoDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FramePipe=new CATDlgFrame(this,(const char*)"FramePipe",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Label=new CATDlgLabel(_FramePipe,(const char*)"Label",0);
_SelectorListLine1=new CATDlgSelectorList(_FramePipe,(const char*)"SelectorListLine1",0);
_Label4=new CATDlgLabel(_FramePipe,(const char*)"Label4",0);
_SelectorListLine2=new CATDlgSelectorList(_FramePipe,(const char*)"SelectorListLine2",0);
_ButtonGenView=new CATDlgPushButton(_FramePipe,(const char*)"ButtonGenView",0);
_PushButtonBrowseView=new CATDlgPushButton(_FramePipe,(const char*)"PushButtonBrowseView",0);
_FrameDrw=new CATDlgFrame(this,(const char*)"FrameDrw",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameDrw,(const char*)"Label1",0);
_SelectorListDrw=new CATDlgSelectorList(_FrameDrw,(const char*)"SelectorListDrw",0);
_Label2=new CATDlgLabel(_FrameDrw,(const char*)"Label2",0);
_SelectorListPipeProd=new CATDlgSelectorList(_FrameDrw,(const char*)"SelectorListPipeProd",0);
_FrameList=new CATDlgFrame(this,(const char*)"FrameList",0|CATDlgFraNoTitle|CATDlgGridLayout);
_ButtonOpen=new CATDlgPushButton(_FrameList,(const char*)"ButtonOpen",0);
_PushButtonDelete=new CATDlgPushButton(_FrameList,(const char*)"PushButtonDelete",0);
_FramePipe->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListLine1->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListLine1->SetVisibleTextHeight(1);
_SelectorListLine1->SetVisibleTextWidth(12);
_Label4->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListLine2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListLine2->SetVisibleTextHeight(1);
_SelectorListLine2->SetVisibleTextWidth(12);
_ButtonGenView->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonBrowseView->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameDrw->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListDrw->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListDrw->SetVisibleTextHeight(1);
_SelectorListDrw->SetVisibleTextWidth(12);
_Label2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListPipeProd->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListPipeProd->SetVisibleTextHeight(1);
_SelectorListPipeProd->SetVisibleTextWidth(12);
_FrameList->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_ButtonOpen->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonDelete->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridRowResizable(2, 1);

_FrameDrw->SetGridColumnResizable(0, 1);
_FramePipe->SetGridColumnResizable(1, 1);
_FrameList->SetGridColumnResizable(0, 1);
_FrameList->SetGridColumnResizable(1, 1);
_FrameList->SetGridRowResizable(0, 1);


// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
