

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "OutPutToolDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgPushButton.h"
#include "CATDlgMultiList.h"
#include "CATDlgLabel.h"
#include "CATDlgPushButton.h"

// Begin of User Code

// End of User Code

OutPutToolDlg::OutPutToolDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_Frame = NULL;
_Label1 = NULL;
_PushButtonOpt = NULL;
_MultiListPoints = NULL;
_Label2 = NULL;
_PushButtonShow = NULL;

// Begin of User Code

// End of User Code

}

OutPutToolDlg::~OutPutToolDlg()
{

// Begin of User Code

// End of User Code
_Frame = NULL;
_Label1 = NULL;
_PushButtonOpt = NULL;
_MultiListPoints = NULL;
_Label2 = NULL;
_PushButtonShow = NULL;

}



void OutPutToolDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_Frame=new CATDlgFrame(this,(const char*)"Frame",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Label1=new CATDlgLabel(_Frame,(const char*)"Label1",0);
_PushButtonOpt=new CATDlgPushButton(_Frame,(const char*)"PushButtonOpt",0);
_MultiListPoints=new CATDlgMultiList(_Frame,(const char*)"MultiListPoints",0);
_Label2=new CATDlgLabel(_Frame,(const char*)"Label2",0);
_PushButtonShow=new CATDlgPushButton(_Frame,(const char*)"PushButtonShow",0);
_Frame->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonOpt->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_MultiListPoints->SetGridConstraints(2,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButtonShow->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridRowResizable(0, 1);

_Frame->SetGridColumnResizable(0, 1);
_Frame->SetGridColumnResizable(1, 1);
_Frame->SetGridRowResizable(2, 1);

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
