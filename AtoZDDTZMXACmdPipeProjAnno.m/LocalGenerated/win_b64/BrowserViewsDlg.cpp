

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "BrowserViewsDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"
#include "CATDlgPushButton.h"
#include "CATDlgFrame.h"
#include "CATNavigation3DViewer.h"

// Begin of User Code

// End of User Code

BrowserViewsDlg::BrowserViewsDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndBtnOKApplyClose
| CATDlgGridLayout
)
{

_PushButtonReverse = NULL;
_PushButtonL30 = NULL;
_PushButtonR30 = NULL;
_PushButtonR90 = NULL;
_PushButtonL90 = NULL;
_FrameView = NULL;
_Navi3DViewer = NULL;

// Begin of User Code

// End of User Code

}

BrowserViewsDlg::~BrowserViewsDlg()
{

// Begin of User Code

// End of User Code
_PushButtonReverse = NULL;
_PushButtonL30 = NULL;
_PushButtonR30 = NULL;
_PushButtonR90 = NULL;
_PushButtonL90 = NULL;
_FrameView = NULL;
_Navi3DViewer = NULL;

}



void BrowserViewsDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_PushButtonReverse=new CATDlgPushButton(this,(const char*)"PushButtonReverse",0);
_PushButtonL30=new CATDlgPushButton(this,(const char*)"PushButtonL30",0);
_PushButtonR30=new CATDlgPushButton(this,(const char*)"PushButtonR30",0);
_PushButtonR90=new CATDlgPushButton(this,(const char*)"PushButtonR90",0);
_PushButtonL90=new CATDlgPushButton(this,(const char*)"PushButtonL90",0);
_FrameView=new CATDlgFrame(this,(const char*)"FrameView",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Navi3DViewer=new CATNavigation3DViewer(_FrameView,(const char*)"Navi3DViewer",
	0|CATDlgFraNoTitle,300,300,0);
_PushButtonReverse->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonL30->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonR30->SetGridConstraints(1,3,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonR90->SetGridConstraints(1,4,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonL90->SetGridConstraints(1,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameView->SetGridConstraints(0,0,5,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Navi3DViewer->SetGridConstraints(0,0,7,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
