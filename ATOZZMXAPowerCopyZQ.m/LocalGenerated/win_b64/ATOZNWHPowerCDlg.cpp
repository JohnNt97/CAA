

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "ATOZNWHPowerCDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
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

ATOZNWHPowerCDlg::ATOZNWHPowerCDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameInput = NULL;
_SelectorListCenterLine = NULL;
_Label2 = NULL;
_SelectorListHeadPlane = NULL;
_Label3 = NULL;
_SelectorListTailPlane = NULL;
_Label4 = NULL;
_SelectorListCenterPlane = NULL;
_Label1 = NULL;
_FrameParam = NULL;
_Label5 = NULL;
_Label6 = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerZLCount = NULL;
_SpinnerWDJD = NULL;
_SpinnerWDLength = NULL;
_SpinnerZJLength = NULL;
_SpinnerWidth = NULL;
_SpinnerHeight = NULL;
_Label11 = NULL;
_Label12 = NULL;
_Label13 = NULL;
_Label14 = NULL;
_Label15 = NULL;
_Label16 = NULL;
_SpinnerWinHeight = NULL;
_SpinnerWinUDloc = NULL;
_SpinnerWinFBLoc = NULL;
_SpinnerWDHalfWid = NULL;
_SpinnerWinWidth = NULL;
_SpinnerWall = NULL;
_FrameLog = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;

// Begin of User Code

// End of User Code

}

ATOZNWHPowerCDlg::~ATOZNWHPowerCDlg()
{

// Begin of User Code

// End of User Code
_FrameInput = NULL;
_SelectorListCenterLine = NULL;
_Label2 = NULL;
_SelectorListHeadPlane = NULL;
_Label3 = NULL;
_SelectorListTailPlane = NULL;
_Label4 = NULL;
_SelectorListCenterPlane = NULL;
_Label1 = NULL;
_FrameParam = NULL;
_Label5 = NULL;
_Label6 = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerZLCount = NULL;
_SpinnerWDJD = NULL;
_SpinnerWDLength = NULL;
_SpinnerZJLength = NULL;
_SpinnerWidth = NULL;
_SpinnerHeight = NULL;
_Label11 = NULL;
_Label12 = NULL;
_Label13 = NULL;
_Label14 = NULL;
_Label15 = NULL;
_Label16 = NULL;
_SpinnerWinHeight = NULL;
_SpinnerWinUDloc = NULL;
_SpinnerWinFBLoc = NULL;
_SpinnerWDHalfWid = NULL;
_SpinnerWinWidth = NULL;
_SpinnerWall = NULL;
_FrameLog = NULL;
_EditorInstructions = NULL;
_LabelLog = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;

}



void ATOZNWHPowerCDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameInput=new CATDlgFrame(this,(const char*)"FrameInput",0|CATDlgGridLayout);
_SelectorListCenterLine=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListCenterLine",0);
_Label2=new CATDlgLabel(_FrameInput,(const char*)"Label2",0);
_SelectorListHeadPlane=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListHeadPlane",0);
_Label3=new CATDlgLabel(_FrameInput,(const char*)"Label3",0);
_SelectorListTailPlane=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListTailPlane",0);
_Label4=new CATDlgLabel(_FrameInput,(const char*)"Label4",0);
_SelectorListCenterPlane=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListCenterPlane",0);
_Label1=new CATDlgLabel(_FrameInput,(const char*)"Label1",0);
_FrameParam=new CATDlgFrame(this,(const char*)"FrameParam",0|CATDlgGridLayout);
_Label5=new CATDlgLabel(_FrameParam,(const char*)"Label5",0);
_Label6=new CATDlgLabel(_FrameParam,(const char*)"Label6",0);
_Label7=new CATDlgLabel(_FrameParam,(const char*)"Label7",0);
_Label8=new CATDlgLabel(_FrameParam,(const char*)"Label8",0);
_Label9=new CATDlgLabel(_FrameParam,(const char*)"Label9",0);
_Label10=new CATDlgLabel(_FrameParam,(const char*)"Label10",0);
_SpinnerZLCount=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerZLCount",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWDJD=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWDJD",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWDLength=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWDLength",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerZJLength=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerZJLength",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWidth=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWidth",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerHeight=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerHeight",0|CATDlgSpnEntry|CATDlgSpnDouble);
_Label11=new CATDlgLabel(_FrameParam,(const char*)"Label11",0);
_Label12=new CATDlgLabel(_FrameParam,(const char*)"Label12",0);
_Label13=new CATDlgLabel(_FrameParam,(const char*)"Label13",0);
_Label14=new CATDlgLabel(_FrameParam,(const char*)"Label14",0);
_Label15=new CATDlgLabel(_FrameParam,(const char*)"Label15",0);
_Label16=new CATDlgLabel(_FrameParam,(const char*)"Label16",0);
_SpinnerWinHeight=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWinHeight",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWinUDloc=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWinUDloc",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWinFBLoc=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWinFBLoc",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWDHalfWid=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWDHalfWid",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWinWidth=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWinWidth",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerWall=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerWall",0|CATDlgSpnEntry|CATDlgSpnDouble);
_FrameLog=new CATDlgFrame(this,(const char*)"FrameLog",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_EditorInstructions=new CATDlgEditor(_FrameLog,(const char*)"EditorInstructions",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_LabelLog=new CATDlgLabel(_FrameLog,(const char*)"LabelLog",0);
_CheckButton=new CATDlgCheckButton(_FrameLog,(const char*)"CheckButton",0);
_FrameViewer=new CATDlgFrame(this,(const char*)"FrameViewer",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Nav3DViewerModel=new CATNavigation3DViewer(_FrameViewer,(const char*)"Nav3DViewerModel",
	0|CATDlgFraNoTitle|CATDlgFraNoFrame,500,400,0);
_FrameInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListCenterLine->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListCenterLine->SetVisibleTextHeight(1);
_SelectorListCenterLine->SetVisibleTextWidth(12);
_Label2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListHeadPlane->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListHeadPlane->SetVisibleTextHeight(1);
_SelectorListHeadPlane->SetVisibleTextWidth(12);
_Label3->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListTailPlane->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListTailPlane->SetVisibleTextHeight(1);
_SelectorListTailPlane->SetVisibleTextWidth(12);
_Label4->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListCenterPlane->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListCenterPlane->SetVisibleTextHeight(1);
_SelectorListCenterPlane->SetVisibleTextWidth(12);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameParam->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label5->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label6->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label7->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label8->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label9->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label10->SetGridConstraints(5,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerZLCount->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerZLCount->SetMinMaxStep(0,16,1);
_SpinnerWDJD->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWDJD->SetMinMaxStep(-180,180,1);
_SpinnerWDLength->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWDLength->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWDLength->SetMinMaxStep(0,4000,1);
_SpinnerZJLength->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerZJLength->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerZJLength->SetMinMaxStep(0,7000,1);
_SpinnerWidth->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWidth->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWidth->SetMinMaxStep(0,5000,1);
_SpinnerHeight->SetGridConstraints(5,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerHeight->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerHeight->SetMinMaxStep(0,4000,1);
_Label11->SetGridConstraints(0,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label12->SetGridConstraints(1,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label13->SetGridConstraints(2,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label14->SetGridConstraints(3,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label15->SetGridConstraints(4,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label16->SetGridConstraints(5,2,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerWinHeight->SetGridConstraints(0,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWinHeight->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWinHeight->SetMinMaxStep(0,2000,1);
_SpinnerWinUDloc->SetGridConstraints(1,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWinUDloc->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWinUDloc->SetMinMaxStep(0,2000,1);
_SpinnerWinFBLoc->SetGridConstraints(2,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWinFBLoc->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWinFBLoc->SetMinMaxStep(0,1000,1);
_SpinnerWDHalfWid->SetGridConstraints(3,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWDHalfWid->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWDHalfWid->SetMinMaxStep(0,3000,1);
_SpinnerWinWidth->SetGridConstraints(4,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWinWidth->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWinWidth->SetMinMaxStep(0,1000,1);
_SpinnerWall->SetGridConstraints(5,3,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerWall->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Millimeter);
_SpinnerWall->SetMinMaxStep(0,100,1);
_FrameLog->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorInstructions->SetVisibleTextHeight(8);
_EditorInstructions->SetVisibleTextWidth(15);
_LabelLog->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_CheckButton->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameViewer->SetGridConstraints(0,1,1,3,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Nav3DViewerModel->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridColumnResizable(1, 1);
this->SetGridRowResizable(0, 1);
this->SetGridRowResizable(1, 1);
this->SetGridRowResizable(2, 1);

_FrameInput->SetGridColumnResizable(1, 1);

_FrameParam->SetGridColumnResizable(1, 1);
_FrameParam->SetGridColumnResizable(3, 1);

_FrameLog->SetGridColumnResizable(0, 1);
_FrameLog->SetGridRowResizable(0, 1);

_FrameViewer->SetGridColumnResizable(0, 1);
_FrameViewer->SetGridRowResizable(0, 1);



_SelectorListCenterLine->SetLine("No Selection");
int ArraySel[1] = { 0 };
_SelectorListCenterLine->SetSelect(ArraySel, 1);

_SelectorListHeadPlane->SetLine("No Selection");
_SelectorListTailPlane->SetLine("No Selection");
_SelectorListCenterPlane->SetLine("No Selection");

_Nav3DViewerModel->SetBackgroundColor(0.235294f, 0.4f, 0.501961f);

_CheckButton->SetState(CATDlgUncheck);


// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
