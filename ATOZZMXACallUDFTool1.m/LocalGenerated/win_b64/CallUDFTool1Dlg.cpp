

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "CallUDFTool1Dlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgSelectorList.h"
#include "CATDlgSelectorList.h"
#include "CATDlgSelectorList.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgCheckButton.h"
#include "CATDlgFrame.h"
#include "CATNavigation3DViewer.h"
#include "CATDlgLabel.h"

// Begin of User Code

// End of User Code

CallUDFTool1Dlg::CallUDFTool1Dlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
|CATDlgWndBtnOKCancelPreview
| CATDlgGridLayout
)
{

_FrameProgress = NULL;
_Label11 = NULL;
_FrameIn = NULL;
_Label1 = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_Label5 = NULL;
_Label6 = NULL;
_SelectorListBtPlaneM = NULL;
_SelectorListSur = NULL;
_SelectorListBtPlaneF = NULL;
_SelectorListXY = NULL;
_FrameParam = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerPlane1 = NULL;
_SpinnerPlane2 = NULL;
_SpinnerPlane3 = NULL;
_SpinnerPlane4 = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;
_LabelLog = NULL;

// Begin of User Code
_pDlgProgress = NULL;
// End of User Code

}

CallUDFTool1Dlg::~CallUDFTool1Dlg()
{

// Begin of User Code

// End of User Code
_FrameProgress = NULL;
_Label11 = NULL;
_FrameIn = NULL;
_Label1 = NULL;
_Label2 = NULL;
_Label3 = NULL;
_Label4 = NULL;
_Label5 = NULL;
_Label6 = NULL;
_SelectorListBtPlaneM = NULL;
_SelectorListSur = NULL;
_SelectorListBtPlaneF = NULL;
_SelectorListXY = NULL;
_FrameParam = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerPlane1 = NULL;
_SpinnerPlane2 = NULL;
_SpinnerPlane3 = NULL;
_SpinnerPlane4 = NULL;
_CheckButton = NULL;
_FrameViewer = NULL;
_Nav3DViewerModel = NULL;
_LabelLog = NULL;

}



void CallUDFTool1Dlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameProgress=new CATDlgFrame(this,(const char*)"FrameProgress",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Label11=new CATDlgLabel(this,(const char*)"Label11",0);
_FrameIn=new CATDlgFrame(this,(const char*)"FrameIn",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameIn,(const char*)"Label1",0);
_Label2=new CATDlgLabel(_FrameIn,(const char*)"Label2",0);
_Label3=new CATDlgLabel(_FrameIn,(const char*)"Label3",0);
_Label4=new CATDlgLabel(_FrameIn,(const char*)"Label4",0);
_Label5=new CATDlgLabel(_FrameIn,(const char*)"Label5",0);
_Label6=new CATDlgLabel(_FrameIn,(const char*)"Label6",0);
_SelectorListBtPlaneM=new CATDlgSelectorList(_FrameIn,(const char*)"SelectorListBtPlaneM",0);
_SelectorListSur=new CATDlgSelectorList(_FrameIn,(const char*)"SelectorListSur",0|CATDlgLstMultisel);
_SelectorListBtPlaneF=new CATDlgSelectorList(_FrameIn,(const char*)"SelectorListBtPlaneF",0);
_SelectorListXY=new CATDlgSelectorList(_FrameIn,(const char*)"SelectorListXY",0);
_FrameParam=new CATDlgFrame(this,(const char*)"FrameParam",0|CATDlgGridLayout);
_Label7=new CATDlgLabel(_FrameParam,(const char*)"Label7",0);
_Label8=new CATDlgLabel(_FrameParam,(const char*)"Label8",0);
_Label9=new CATDlgLabel(_FrameParam,(const char*)"Label9",0);
_Label10=new CATDlgLabel(_FrameParam,(const char*)"Label10",0);
_SpinnerPlane1=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerPlane1",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerPlane2=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerPlane2",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerPlane3=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerPlane3",0|CATDlgSpnEntry|CATDlgSpnDouble);
_SpinnerPlane4=new CATDlgSpinner(_FrameParam,(const char*)"SpinnerPlane4",0|CATDlgSpnEntry|CATDlgSpnDouble);
_CheckButton=new CATDlgCheckButton(_FrameParam,(const char*)"CheckButton",0);
_FrameViewer=new CATDlgFrame(this,(const char*)"FrameViewer",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Nav3DViewerModel=new CATNavigation3DViewer(_FrameViewer,(const char*)"Nav3DViewerModel",
	0|CATDlgFraNoTitle|CATDlgFraNoFrame,500,300,0);
_LabelLog=new CATDlgLabel(this,(const char*)"LabelLog",0);
_FrameProgress->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label11->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_FrameIn->SetGridConstraints(0,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label2->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label3->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label4->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label5->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label6->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListBtPlaneM->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListBtPlaneM->SetVisibleTextHeight(1);
_SelectorListBtPlaneM->SetVisibleTextWidth(12);
_SelectorListSur->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListSur->SetVisibleTextHeight(1);
_SelectorListSur->SetVisibleTextWidth(12);
_SelectorListBtPlaneF->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListBtPlaneF->SetVisibleTextHeight(1);
_SelectorListBtPlaneF->SetVisibleTextWidth(12);
_SelectorListXY->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListXY->SetVisibleTextHeight(1);
_SelectorListXY->SetVisibleTextWidth(12);
_FrameParam->SetGridConstraints(1,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_FrameParam->SetGridRowResizable(0,1);
_Label7->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label8->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label9->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label10->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerPlane1->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPlane1->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Meter);
_SpinnerPlane1->SetVisibleTextWidth(10);
_SpinnerPlane1->SetMinMaxStep(0,50000000,1);
_SpinnerPlane2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPlane2->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Meter);
_SpinnerPlane2->SetVisibleTextWidth(10);
_SpinnerPlane2->SetMinMaxStep(0,50000000,1);
_SpinnerPlane3->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPlane3->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Meter);
_SpinnerPlane3->SetVisibleTextWidth(10);
_SpinnerPlane3->SetMinMaxStep(0,50000000,1);
_SpinnerPlane4->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPlane4->SetUnit((CATDlgControl::CATDlgUnit)CATDlgControl::Meter);
_SpinnerPlane4->SetVisibleTextWidth(10);
_SpinnerPlane4->SetMinMaxStep(0,50000000,1);
_CheckButton->SetGridConstraints(3,2,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_FrameViewer->SetGridConstraints(3,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Nav3DViewerModel->SetGridConstraints(0,0,3,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_LabelLog->SetGridConstraints(4,0,2,1,0|CATGRID_LEFT|CATGRID_TOP);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridRowResizable(0, 1);
this->SetGridRowResizable(1, 1);
this->SetGridRowResizable(2, 1);

_FrameIn->SetGridColumnResizable(1, 1);
_FrameParam->SetGridColumnResizable(1, 1);

_FrameViewer->SetGridColumnResizable(0, 1);
_FrameViewer->SetGridRowResizable(0, 1);

_pDlgProgress = new CATDlgProgress(_FrameProgress, (const char*)"Progress", 0);
_pDlgProgress->SetGridConstraints(0, 0, 1, 1, 0 | CATGRID_LEFT | CATGRID_RIGHT | CATGRID_TOP | CATGRID_BOTTOM);

//CATDlgProgress * pDlgProgress = new CATDlgProgress(this, "Progress");

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
