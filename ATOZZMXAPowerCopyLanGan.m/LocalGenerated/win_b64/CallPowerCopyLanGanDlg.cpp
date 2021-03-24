

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "CallPowerCopyLanGanDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"
#include "CATDlgCheckButton.h"
#include "CATDlgFrame.h"
#include "CATNavigation3DViewer.h"

// Begin of User Code

// End of User Code

CallPowerCopyLanGanDlg::CallPowerCopyLanGanDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameInput = NULL;
_Label5 = NULL;
_ComboType = NULL;
_Label1 = NULL;
_SelectorListPath = NULL;
_FrameParam = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_SpinnerExc = NULL;
_SpinnerSep = NULL;
_SpinnerHeight = NULL;
_FrameLog = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;

// Begin of User Code

// End of User Code

}

CallPowerCopyLanGanDlg::~CallPowerCopyLanGanDlg()
{

// Begin of User Code

// End of User Code
_FrameInput = NULL;
_Label5 = NULL;
_ComboType = NULL;
_Label1 = NULL;
_SelectorListPath = NULL;
_FrameParam = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_SpinnerExc = NULL;
_SpinnerSep = NULL;
_SpinnerHeight = NULL;
_FrameLog = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;

}



void CallPowerCopyLanGanDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameInput=new CATDlgFrame(this,(const char*)"FrameInput",0|CATDlgGridLayout);
_Label5=new CATDlgLabel(_FrameInput,(const char*)"Label5",0);
_ComboType=new CATDlgCombo(_FrameInput,(const char*)"ComboType",0|CATDlgCmbDropDown);
_Label1=new CATDlgLabel(_FrameInput,(const char*)"Label1",0);
_SelectorListPath=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListPath",0);
_FrameParam=new CATDlgFrame(this,(const char*)"FrameParam",0|CATDlgGridLayout);
_Label2=new CATDlgLabel(_FrameParam,(const char*)"Label2",0);
_Label3=new CATDlgLabel(_FrameParam,(const char*)"Label3",0);
_Label4=new CATDlgLabel(_FrameParam,(const char*)"Label4",0);
_SpinnerExc=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerExc",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerSep=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerSep",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerHeight=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerHeight",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameLog=new CATDlgFrame(this,(const char*)"FrameLog",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_EditorInstructions=new CATDlgEditor(_FrameLog,(const char*)"EditorInstructions",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_LabelLog=new CATDlgLabel(_FrameLog,(const char*)"LabelLog",0);
_CheckButton=new CATDlgCheckButton(_FrameLog,(const char*)"CheckButton",0);
_FrameViewer=new CATDlgFrame(this,(const char*)"FrameViewer",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Nav3DViewerModel=new CATNavigation3DViewer(_FrameViewer,(const char*)"Nav3DViewerModel",
	0|CATDlgFraNoTitle|CATDlgFraNoFrame,500,400,0);
_FrameInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label5->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboType->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Label1->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListPath->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListPath->SetVisibleTextHeight(1);
_SelectorListPath->SetVisibleTextWidth(12);
_FrameParam->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label3->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label4->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerExc->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerExc->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerExc->SetMinMaxStep(0,10,0.05);
_SpinnerSep->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerSep->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerSep->SetMinMaxStep(0,100,0.05);
_SpinnerHeight->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerHeight->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerHeight->SetMinMaxStep(0,10,0.05);
_FrameLog->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetVisibleTextHeight(8);
_EditorInstructions->SetVisibleTextWidth(15);
_LabelLog->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_CheckButton->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameViewer->SetGridConstraints(0,1,2,3,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Nav3DViewerModel->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridColumnResizable(1, 1);
this->SetGridColumnResizable(2, 1);
this->SetGridRowResizable(0, 1);
this->SetGridRowResizable(1, 1);
this->SetGridRowResizable(2, 1);

_FrameInput->SetGridColumnResizable(1, 1);
_FrameParam->SetGridColumnResizable(1, 1);
_FrameLog->SetGridColumnResizable(0, 1);
_FrameLog->SetGridRowResizable(0, 1);

_FrameViewer->SetGridColumnResizable(0, 1);
_FrameViewer->SetGridRowResizable(0, 1);

_ComboType->SetLine("开放路径");
_ComboType->SetLine("封闭路径");
_ComboType->SetSelect(0);

_CheckButton->SetState(CATDlgUncheck);
	
// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
