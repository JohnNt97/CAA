

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZCenterLinesCrtingDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"

// Begin of User Code

// End of User Code

ATOZCenterLinesCrtingDlg::ATOZCenterLinesCrtingDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameSelect = NULL;
_Label1 = NULL;
_SelectorListPipeProd = NULL;

// Begin of User Code

// End of User Code

}

ATOZCenterLinesCrtingDlg::~ATOZCenterLinesCrtingDlg()
{

// Begin of User Code

// End of User Code
_FrameSelect = NULL;
_Label1 = NULL;
_SelectorListPipeProd = NULL;

}



void ATOZCenterLinesCrtingDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameSelect=new CATDlgFrame(this,(const char*)"FrameSelect",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameSelect,(const char*)"Label1",0);
_SelectorListPipeProd=new CATDlgSelectorList(_FrameSelect,(const char*)"SelectorListPipeProd",0);
_FrameSelect->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListPipeProd->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListPipeProd->SetVisibleTextHeight(1);
_SelectorListPipeProd->SetVisibleTextWidth(12);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
