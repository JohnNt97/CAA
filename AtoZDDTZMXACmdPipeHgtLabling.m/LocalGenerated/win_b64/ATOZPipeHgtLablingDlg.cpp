

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZPipeHgtLablingDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgEditor.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"

// Begin of User Code

// End of User Code

ATOZPipeHgtLablingDlg::ATOZPipeHgtLablingDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameInput = NULL;
_SelectorListTarget = NULL;
_Label1 = NULL;
_FrameScale = NULL;
_Label2 = NULL;
_SpinnerOffset = NULL;
_Label3 = NULL;
_EditorScale = NULL;
_FrameCenter = NULL;
_Label4 = NULL;
_SelectorListLine = NULL;
_Label5 = NULL;
_SelectorListPoint = NULL;

// Begin of User Code

// End of User Code

}

ATOZPipeHgtLablingDlg::~ATOZPipeHgtLablingDlg()
{

// Begin of User Code

// End of User Code
_FrameInput = NULL;
_SelectorListTarget = NULL;
_Label1 = NULL;
_FrameScale = NULL;
_Label2 = NULL;
_SpinnerOffset = NULL;
_Label3 = NULL;
_EditorScale = NULL;
_FrameCenter = NULL;
_Label4 = NULL;
_SelectorListLine = NULL;
_Label5 = NULL;
_SelectorListPoint = NULL;

}



void ATOZPipeHgtLablingDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameInput=new CATDlgFrame(this,(const char*)"FrameInput",0|CATDlgGridLayout);
_SelectorListTarget=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListTarget",0);
_Label1=new CATDlgLabel(_FrameInput,(const char*)"Label1",0);
_FrameScale=new CATDlgFrame(this,(const char*)"FrameScale",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Label2=new CATDlgLabel(_FrameScale,(const char*)"Label2",0);
_SpinnerOffset=new CATDlgSpinner(_FrameScale,(const char*)"SpinnerOffset",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label3=new CATDlgLabel(_FrameScale,(const char*)"Label3",0);
_EditorScale=new CATDlgEditor(_FrameScale,(const char*)"EditorScale",0);
_FrameCenter=new CATDlgFrame(this,(const char*)"FrameCenter",0|CATDlgGridLayout);
_Label4=new CATDlgLabel(_FrameCenter,(const char*)"Label4",0);
_SelectorListLine=new CATDlgSelectorList(_FrameCenter,(const char*)"SelectorListLine",0);
_Label5=new CATDlgLabel(_FrameCenter,(const char*)"Label5",0);
_SelectorListPoint=new CATDlgSelectorList(_FrameCenter,(const char*)"SelectorListPoint",0);
_FrameInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTarget->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTarget->SetVisibleTextHeight(1);
_SelectorListTarget->SetVisibleTextWidth(12);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameScale->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOffset->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerOffset->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerOffset->SetMinMaxStep(0,10,0.005);
_Label3->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_EditorScale->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_FrameCenter->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label4->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListLine->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListLine->SetVisibleTextHeight(1);
_SelectorListLine->SetVisibleTextWidth(12);
_Label5->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListPoint->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListPoint->SetVisibleTextHeight(1);
_SelectorListPoint->SetVisibleTextWidth(12);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
_FrameInput->SetGridColumnResizable(1, 1);
_FrameCenter->SetGridColumnResizable(1, 1);
_FrameScale->SetGridColumnResizable(1, 1);
// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
