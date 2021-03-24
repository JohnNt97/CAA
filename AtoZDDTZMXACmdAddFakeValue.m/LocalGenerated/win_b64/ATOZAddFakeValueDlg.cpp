

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZAddFakeValueDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"

// Begin of User Code

// End of User Code

ATOZAddFakeValueDlg::ATOZAddFakeValueDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_Frame1 = NULL;
_Editor = NULL;

// Begin of User Code

// End of User Code

}

ATOZAddFakeValueDlg::~ATOZAddFakeValueDlg()
{

// Begin of User Code

// End of User Code
_Frame1 = NULL;
_Editor = NULL;

}



void ATOZAddFakeValueDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_Frame1=new CATDlgFrame(this,(const char*)"Frame1",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Editor=new CATDlgEditor(_Frame1,(const char*)"Editor",0|CATDlgEdtReadOnly);
_Frame1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Editor->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
