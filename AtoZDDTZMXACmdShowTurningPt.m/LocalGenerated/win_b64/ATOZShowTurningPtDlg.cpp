

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZShowTurningPtDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgEditor.h"
#include "CATDlgMultiList.h"

// Begin of User Code

// End of User Code

ATOZShowTurningPtDlg::ATOZShowTurningPtDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FramePipe = NULL;
_Label1 = NULL;
_SelectorListPipe = NULL;
_Frame2 = NULL;
_Label2 = NULL;
_EditorFund = NULL;
_MultiListPoints = NULL;

// Begin of User Code

// End of User Code

}

ATOZShowTurningPtDlg::~ATOZShowTurningPtDlg()
{

// Begin of User Code

// End of User Code
_FramePipe = NULL;
_Label1 = NULL;
_SelectorListPipe = NULL;
_Frame2 = NULL;
_Label2 = NULL;
_EditorFund = NULL;
_MultiListPoints = NULL;

}



void ATOZShowTurningPtDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FramePipe=new CATDlgFrame(this,(const char*)"FramePipe",0|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FramePipe,(const char*)"Label1",0);
_SelectorListPipe=new CATDlgSelectorList(_FramePipe,(const char*)"SelectorListPipe",0);
_Frame2=new CATDlgFrame(this,(const char*)"Frame2",0|CATDlgGridLayout);
_Label2=new CATDlgLabel(_Frame2,(const char*)"Label2",0);
_EditorFund=new CATDlgEditor(_Frame2,(const char*)"EditorFund",0);
_MultiListPoints=new CATDlgMultiList(_Frame2,(const char*)"MultiListPoints",0);
_FramePipe->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListPipe->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListPipe->SetVisibleTextHeight(1);
_SelectorListPipe->SetVisibleTextWidth(12);
_Frame2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_EditorFund->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_MultiListPoints->SetGridConstraints(1,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
