

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "CallEngineeringTemplate10Dlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgPushButton.h"
#include "CATDlgFrame.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"

// Begin of User Code

// End of User Code

CallEngineeringTemplate10Dlg::CallEngineeringTemplate10Dlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameInput = NULL;
_Label1 = NULL;
_SelectorListAxis = NULL;
_FrameCompute = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_SpinnerD1 = NULL;
_SpinnerD2 = NULL;
_SpinnerD3 = NULL;
_Label6 = NULL;
_SpinnerT1 = NULL;
_SpinnerT3 = NULL;
_Label8 = NULL;
_SpinnerH = NULL;
_Label5 = NULL;
_SpinnerA = NULL;
_Label7 = NULL;
_FrameLog = NULL;
_EditorUseSteps = NULL;
_LabelLog = NULL;
_FrameViewer = NULL;
_LabelView = NULL;
_PushButton = NULL;
_FrameRef = NULL;
_Frame1 = NULL;
_EditorV = NULL;
_Label14 = NULL;
_Frame2 = NULL;
_Editorx = NULL;
_Label15 = NULL;
_FrameParam = NULL;
_Label11 = NULL;
_Label12 = NULL;
_Label13 = NULL;
_SpinnerX = NULL;
_SpinnerT2 = NULL;
_SpinnerR = NULL;

// Begin of User Code

// End of User Code

}

CallEngineeringTemplate10Dlg::~CallEngineeringTemplate10Dlg()
{

// Begin of User Code

// End of User Code
_FrameInput = NULL;
_Label1 = NULL;
_SelectorListAxis = NULL;
_FrameCompute = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_SpinnerD1 = NULL;
_SpinnerD2 = NULL;
_SpinnerD3 = NULL;
_Label6 = NULL;
_SpinnerT1 = NULL;
_SpinnerT3 = NULL;
_Label8 = NULL;
_SpinnerH = NULL;
_Label5 = NULL;
_SpinnerA = NULL;
_Label7 = NULL;
_FrameLog = NULL;
_EditorUseSteps = NULL;
_LabelLog = NULL;
_FrameViewer = NULL;
_LabelView = NULL;
_PushButton = NULL;
_FrameRef = NULL;
_Frame1 = NULL;
_EditorV = NULL;
_Label14 = NULL;
_Frame2 = NULL;
_Editorx = NULL;
_Label15 = NULL;
_FrameParam = NULL;
_Label11 = NULL;
_Label12 = NULL;
_Label13 = NULL;
_SpinnerX = NULL;
_SpinnerT2 = NULL;
_SpinnerR = NULL;

}



void CallEngineeringTemplate10Dlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameInput=new CATDlgFrame(this,(const char*)"FrameInput",0|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameInput,(const char*)"Label1",0);
_SelectorListAxis=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListAxis",0);
_FrameCompute=new CATDlgFrame(this,(const char*)"FrameCompute",0|CATDlgGridLayout);
_Label2=new CATDlgLabel(_FrameCompute,(const char*)"Label2",0);
_Label3=new CATDlgLabel(_FrameCompute,(const char*)"Label3",0);
_Label4=new CATDlgLabel(_FrameCompute,(const char*)"Label4",0);
_SpinnerD1=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerD1",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerD2=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerD2",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerD3=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerD3",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label6=new CATDlgLabel(_FrameCompute,(const char*)"Label6",0);
_SpinnerT1=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerT1",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerT3=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerT3",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label8=new CATDlgLabel(_FrameCompute,(const char*)"Label8",0);
_SpinnerH=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerH",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label5=new CATDlgLabel(_FrameCompute,(const char*)"Label5",0);
_SpinnerA=new CATDlgSpinner(_FrameCompute,(const char*)"SpinnerA",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label7=new CATDlgLabel(_FrameCompute,(const char*)"Label7",0);
_FrameLog=new CATDlgFrame(this,(const char*)"FrameLog",0|CATDlgFraNoTitle|CATDlgGridLayout);
_EditorUseSteps=new CATDlgEditor(_FrameLog,(const char*)"EditorUseSteps",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_LabelLog=new CATDlgLabel(_FrameLog,(const char*)"LabelLog",0);
_FrameViewer=new CATDlgFrame(this,(const char*)"FrameViewer",0|CATDlgFraNoTitle|CATDlgGridLayout);
_LabelView=new CATDlgLabel(_FrameViewer,(const char*)"LabelView",0);
_PushButton=new CATDlgPushButton(this,(const char*)"PushButton",0);
_FrameRef=new CATDlgFrame(this,(const char*)"FrameRef",0|CATDlgGridLayout);
_Frame1=new CATDlgFrame(_FrameRef,(const char*)"Frame1",0|CATDlgFraNoTitle|CATDlgGridLayout);
_EditorV=new CATDlgEditor(_Frame1,(const char*)"EditorV",0|CATDlgEdtReadOnly);
_Label14=new CATDlgLabel(_Frame1,(const char*)"Label14",0);
_Frame2=new CATDlgFrame(_FrameRef,(const char*)"Frame2",0|CATDlgFraNoTitle|CATDlgGridLayout);
_Editorx=new CATDlgEditor(_Frame2,(const char*)"Editorx",0|CATDlgEdtReadOnly);
_Label15=new CATDlgLabel(_Frame2,(const char*)"Label15",0);
_FrameParam=new CATDlgFrame(this,(const char*)"FrameParam",0|CATDlgGridLayout);
_Label11=new CATDlgLabel(_FrameParam,(const char*)"Label11",0);
_Label12=new CATDlgLabel(_FrameParam,(const char*)"Label12",0);
_Label13=new CATDlgLabel(_FrameParam,(const char*)"Label13",0);
_SpinnerX=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerX",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerT2=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerT2",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerR=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerR",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListAxis->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListAxis->SetVisibleTextHeight(1);
_SelectorListAxis->SetVisibleTextWidth(12);
_FrameCompute->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label2->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label3->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label4->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerD1->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerD1->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerD1->SetMinMaxStep(0,10,0.05);
_SpinnerD2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerD2->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerD2->SetMinMaxStep(0,10,0.05);
_SpinnerD3->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerD3->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerD3->SetMinMaxStep(0,10,0.005);
_Label6->SetGridConstraints(0,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerT1->SetGridConstraints(0,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerT1->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerT1->SetMinMaxStep(0,10,0.005);
_SpinnerT3->SetGridConstraints(1,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerT3->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerT3->SetMinMaxStep(0,10,0.005);
_Label8->SetGridConstraints(2,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerH->SetGridConstraints(2,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerH->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerH->SetMinMaxStep(0,10,0.05);
_Label5->SetGridConstraints(3,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerA->SetGridConstraints(3,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerA->SetMinMaxStep(-180,180,1);
_Label7->SetGridConstraints(1,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameLog->SetGridConstraints(5,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorUseSteps->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_EditorUseSteps->SetVisibleTextHeight(8);
_EditorUseSteps->SetVisibleTextWidth(15);
_LabelLog->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameViewer->SetGridConstraints(0,1,2,6,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_LabelView->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_PushButton->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameRef->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Frame1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorV->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_EditorV->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_Label14->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Frame2->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Editorx->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Editorx->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_Label15->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameParam->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label11->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label12->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label13->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerX->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerX->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerX->SetMinMaxStep(0,10,0.05);
_SpinnerT2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerT2->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerT2->SetMinMaxStep(0,10,0.001);
_SpinnerR->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerR->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerR->SetMinMaxStep(0,10,0.05);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridColumnResizable(1, 1);
this->SetGridColumnResizable(2, 1);
this->SetGridRowResizable(0, 1);
this->SetGridRowResizable(1, 1);
this->SetGridRowResizable(2, 1);
this->SetGridRowResizable(3, 1);
this->SetGridRowResizable(4, 1);
this->SetGridRowResizable(5, 1);

_FrameInput->SetGridColumnResizable(1, 1);

_FrameCompute->SetGridColumnResizable(1, 1);
_FrameCompute->SetGridColumnResizable(3, 1);

_FrameRef->SetGridColumnResizable(0, 1);
_FrameRef->SetGridColumnResizable(1, 1);

_FrameParam->SetGridColumnResizable(0, 1);
_FrameParam->SetGridColumnResizable(1, 1);

_FrameLog->SetGridColumnResizable(0, 1);
_FrameLog->SetGridRowResizable(0, 1);

_FrameViewer->SetGridColumnResizable(0, 1);
_FrameViewer->SetGridRowResizable(0, 1);
// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
