

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "CallEngineeringTemplateDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgFrame.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATNavigation3DViewer.h"

// Begin of User Code

// End of User Code

CallEngineeringTemplateDlg::CallEngineeringTemplateDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameC2 = NULL;
_FrameDJParams = NULL;
_Label10 = NULL;
_SpinnerDJZTCD = NULL;
_Label11 = NULL;
_SpinnerDJZJ = NULL;
_Label12 = NULL;
_SpinnerJSJK = NULL;
_FrameOtherParam = NULL;
_Label13 = NULL;
_SpinnerOtherZJCJTJL = NULL;
_Label14 = NULL;
_SpinnerZJCJWJL = NULL;
_Label15 = NULL;
_SpinnerOtherZJCK = NULL;
_Label16 = NULL;
_SpinnerOtherZJCG = NULL;
_Label17 = NULL;
_SpinnerOtherGZBJ = NULL;
_Label18 = NULL;
_SpinnerOtherZMZLSL = NULL;
_Label19 = NULL;
_ComboZMFX = NULL;
_FrameC1 = NULL;
_FrameSelInput = NULL;
_Label1 = NULL;
_SelectorListHeadPoint = NULL;
_Label2 = NULL;
_SelectorListTailPoint = NULL;
_FrameHeadParam = NULL;
_Label3 = NULL;
_SpinnerHeadLength = NULL;
_Label4 = NULL;
_SpinnerHeadDMJZXX = NULL;
_Label5 = NULL;
_SpinnerHeadD1MJZXXX = NULL;
_FrameTailParams = NULL;
_Label6 = NULL;
_SpinnerTailLength = NULL;
_Label7 = NULL;
_SpinnerTailD2MJZXX = NULL;
_Label8 = NULL;
_SpinnerTailDZG = NULL;
_Label9 = NULL;
_SpinnerTailJCC = NULL;
_FrameInstructions = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_FrameView = NULL;
_Nav3DViewerModel = NULL;

// Begin of User Code

// End of User Code

}

CallEngineeringTemplateDlg::~CallEngineeringTemplateDlg()
{

// Begin of User Code

// End of User Code
_FrameC2 = NULL;
_FrameDJParams = NULL;
_Label10 = NULL;
_SpinnerDJZTCD = NULL;
_Label11 = NULL;
_SpinnerDJZJ = NULL;
_Label12 = NULL;
_SpinnerJSJK = NULL;
_FrameOtherParam = NULL;
_Label13 = NULL;
_SpinnerOtherZJCJTJL = NULL;
_Label14 = NULL;
_SpinnerZJCJWJL = NULL;
_Label15 = NULL;
_SpinnerOtherZJCK = NULL;
_Label16 = NULL;
_SpinnerOtherZJCG = NULL;
_Label17 = NULL;
_SpinnerOtherGZBJ = NULL;
_Label18 = NULL;
_SpinnerOtherZMZLSL = NULL;
_Label19 = NULL;
_ComboZMFX = NULL;
_FrameC1 = NULL;
_FrameSelInput = NULL;
_Label1 = NULL;
_SelectorListHeadPoint = NULL;
_Label2 = NULL;
_SelectorListTailPoint = NULL;
_FrameHeadParam = NULL;
_Label3 = NULL;
_SpinnerHeadLength = NULL;
_Label4 = NULL;
_SpinnerHeadDMJZXX = NULL;
_Label5 = NULL;
_SpinnerHeadD1MJZXXX = NULL;
_FrameTailParams = NULL;
_Label6 = NULL;
_SpinnerTailLength = NULL;
_Label7 = NULL;
_SpinnerTailD2MJZXX = NULL;
_Label8 = NULL;
_SpinnerTailDZG = NULL;
_Label9 = NULL;
_SpinnerTailJCC = NULL;
_FrameInstructions = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_FrameView = NULL;
_Nav3DViewerModel = NULL;

}



void CallEngineeringTemplateDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameC2=new CATDlgFrame(this,(const char*)"FrameC2",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_FrameDJParams=new CATDlgFrame(_FrameC2,(const char*)"FrameDJParams",0|CATDlgGridLayout);
_Label10=new CATDlgLabel(_FrameDJParams,(const char*)"Label10",0);
_SpinnerDJZTCD=new CATDlgSpinner(_FrameDJParams,(const char*)"SpinnerDJZTCD",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label11=new CATDlgLabel(_FrameDJParams,(const char*)"Label11",0);
_SpinnerDJZJ=new CATDlgSpinner(_FrameDJParams,(const char*)"SpinnerDJZJ",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label12=new CATDlgLabel(_FrameDJParams,(const char*)"Label12",0);
_SpinnerJSJK=new CATDlgSpinner(_FrameDJParams,(const char*)"SpinnerJSJK",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameOtherParam=new CATDlgFrame(_FrameC2,(const char*)"FrameOtherParam",0|CATDlgGridLayout);
_Label13=new CATDlgLabel(_FrameOtherParam,(const char*)"Label13",0);
_SpinnerOtherZJCJTJL=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerOtherZJCJTJL",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label14=new CATDlgLabel(_FrameOtherParam,(const char*)"Label14",0);
_SpinnerZJCJWJL=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerZJCJWJL",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label15=new CATDlgLabel(_FrameOtherParam,(const char*)"Label15",0);
_SpinnerOtherZJCK=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerOtherZJCK",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label16=new CATDlgLabel(_FrameOtherParam,(const char*)"Label16",0);
_SpinnerOtherZJCG=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerOtherZJCG",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label17=new CATDlgLabel(_FrameOtherParam,(const char*)"Label17",0);
_SpinnerOtherGZBJ=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerOtherGZBJ",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label18=new CATDlgLabel(_FrameOtherParam,(const char*)"Label18",0);
_SpinnerOtherZMZLSL=new CATDlgSpinner(_FrameOtherParam,(const char*)"SpinnerOtherZMZLSL",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label19=new CATDlgLabel(_FrameOtherParam,(const char*)"Label19",0);
_ComboZMFX=new CATDlgCombo(_FrameOtherParam,(const char*)"ComboZMFX",0|CATDlgCmbDropDown);
_FrameC1=new CATDlgFrame(this,(const char*)"FrameC1",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_FrameSelInput=new CATDlgFrame(_FrameC1,(const char*)"FrameSelInput",0|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameSelInput,(const char*)"Label1",0);
_SelectorListHeadPoint=new CATDlgSelectorList(_FrameSelInput,(const char*)"SelectorListHeadPoint",0);
_Label2=new CATDlgLabel(_FrameSelInput,(const char*)"Label2",0);
_SelectorListTailPoint=new CATDlgSelectorList(_FrameSelInput,(const char*)"SelectorListTailPoint",0);
_FrameHeadParam=new CATDlgFrame(_FrameC1,(const char*)"FrameHeadParam",0|CATDlgGridLayout);
_Label3=new CATDlgLabel(_FrameHeadParam,(const char*)"Label3",0);
_SpinnerHeadLength=new CATDlgSpinner(_FrameHeadParam,(const char*)"SpinnerHeadLength",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label4=new CATDlgLabel(_FrameHeadParam,(const char*)"Label4",0);
_SpinnerHeadDMJZXX=new CATDlgSpinner(_FrameHeadParam,(const char*)"SpinnerHeadDMJZXX",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label5=new CATDlgLabel(_FrameHeadParam,(const char*)"Label5",0);
_SpinnerHeadD1MJZXXX=new CATDlgSpinner(_FrameHeadParam,(const char*)"SpinnerHeadD1MJZXXX",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameTailParams=new CATDlgFrame(_FrameC1,(const char*)"FrameTailParams",0|CATDlgGridLayout);
_Label6=new CATDlgLabel(_FrameTailParams,(const char*)"Label6",0);
_SpinnerTailLength=new CATDlgSpinner(_FrameTailParams,(const char*)"SpinnerTailLength",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label7=new CATDlgLabel(_FrameTailParams,(const char*)"Label7",0);
_SpinnerTailD2MJZXX=new CATDlgSpinner(_FrameTailParams,(const char*)"SpinnerTailD2MJZXX",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label8=new CATDlgLabel(_FrameTailParams,(const char*)"Label8",0);
_SpinnerTailDZG=new CATDlgSpinner(_FrameTailParams,(const char*)"SpinnerTailDZG",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label9=new CATDlgLabel(_FrameTailParams,(const char*)"Label9",0);
_SpinnerTailJCC=new CATDlgSpinner(_FrameTailParams,(const char*)"SpinnerTailJCC",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameInstructions=new CATDlgFrame(this,(const char*)"FrameInstructions",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_EditorInstructions=new CATDlgEditor(_FrameInstructions,(const char*)"EditorInstructions",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_LabelLog=new CATDlgLabel(_FrameInstructions,(const char*)"LabelLog",0);
_FrameView=new CATDlgFrame(this,(const char*)"FrameView",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Nav3DViewerModel=new CATNavigation3DViewer(_FrameView,(const char*)"Nav3DViewerModel",
	0|CATDlgFraNoTitle|CATDlgFraNoFrame,500,400,0);
_FrameC2->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_FrameDJParams->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label10->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJZTCD->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZTCD->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerDJZTCD->SetMinMaxStep(0.05,10,0.02);
_Label11->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJZJ->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZJ->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerDJZJ->SetMinMaxStep(0.05,10,0.02);
_Label12->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJSJK->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJSJK->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerJSJK->SetMinMaxStep(0.05,10,0.02);
_FrameOtherParam->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label13->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOtherZJCJTJL->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerOtherZJCJTJL->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerOtherZJCJTJL->SetMinMaxStep(0.05,10,0.02);
_Label14->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerZJCJWJL->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerZJCJWJL->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerZJCJWJL->SetMinMaxStep(0.05,10,0.02);
_Label15->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOtherZJCK->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerOtherZJCK->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerOtherZJCK->SetMinMaxStep(0.05,10,0.02);
_Label16->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOtherZJCG->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerOtherZJCG->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerOtherZJCG->SetMinMaxStep(0.05,10,0.02);
_Label17->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOtherGZBJ->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerOtherGZBJ->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerOtherGZBJ->SetMinMaxStep(0.05,10,0.02);
_Label18->SetGridConstraints(5,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerOtherZMZLSL->SetGridConstraints(5,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Label19->SetGridConstraints(6,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboZMFX->SetGridConstraints(6,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_FrameC1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_FrameSelInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListHeadPoint->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListHeadPoint->SetVisibleTextHeight(1);
_SelectorListHeadPoint->SetVisibleTextWidth(12);
_Label2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListTailPoint->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTailPoint->SetVisibleTextHeight(1);
_SelectorListTailPoint->SetVisibleTextWidth(12);
_FrameHeadParam->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label3->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerHeadLength->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerHeadLength->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerHeadLength->SetMinMaxStep(0.1,15,0.05);
_Label4->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerHeadDMJZXX->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerHeadDMJZXX->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerHeadDMJZXX->SetMinMaxStep(0.05,10,0.02);
_Label5->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerHeadD1MJZXXX->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerHeadD1MJZXXX->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerHeadD1MJZXXX->SetMinMaxStep(0.05,10,0.02);
_FrameTailParams->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label6->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerTailLength->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerTailLength->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerTailLength->SetMinMaxStep(0.05,10,0.02);
_Label7->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerTailD2MJZXX->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerTailD2MJZXX->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerTailD2MJZXX->SetMinMaxStep(0.05,10,0.02);
_Label8->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerTailDZG->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerTailDZG->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerTailDZG->SetMinMaxStep(0.05,10,0.02);
_Label9->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerTailJCC->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerTailJCC->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerTailJCC->SetMinMaxStep(0.05,10,0.02);
_FrameInstructions->SetGridConstraints(1,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetVisibleTextHeight(8);
_EditorInstructions->SetVisibleTextWidth(15);
_LabelLog->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameView->SetGridConstraints(0,2,1,2,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Nav3DViewerModel->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridColumnResizable(1, 1);
this->SetGridColumnResizable(2, 1);
this->SetGridRowResizable(1, 1);

_FrameC1->SetGridColumnResizable(0, 1);
_FrameC2->SetGridColumnResizable(0, 1);

_FrameSelInput->SetGridColumnResizable(1, 1);
_FrameHeadParam->SetGridColumnResizable(1, 1);
_FrameTailParams->SetGridColumnResizable(1, 1);

_FrameDJParams->SetGridColumnResizable(1, 1);
_FrameOtherParam->SetGridColumnResizable(1, 1);

_FrameInstructions->SetGridColumnResizable(0, 1);
_FrameInstructions->SetGridRowResizable(0, 1);

_FrameView->SetGridColumnResizable(0, 1);
_FrameView->SetGridRowResizable(0, 1);

_SelectorListHeadPoint->SetLine("No Selection");
int ArraySel[1] = { 0 };
_SelectorListHeadPoint->SetSelect(ArraySel, 1);

_SelectorListTailPoint->SetLine("No Selection");

_Nav3DViewerModel->SetBackgroundColor(0.235294f,0.4f, 0.501961f);

_ComboZMFX->SetLine("朝内");
_ComboZMFX->SetLine("朝外");
for (int i = 1; i <= 8; i++)
{
	CATUnicodeString strIndex("");
	strIndex.BuildFromNum(i);
	_EditorInstructions->SetLine(strIndex+"、模板说明XXXXXXXXXXXXXXXXXXX");
}

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
