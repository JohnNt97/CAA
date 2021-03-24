

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "CallEngineeringTemplate2Dlg.h"
#include "CATDlgGridConstraints.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSelectorList.h"
#include "CATDlgSelectorList.h"
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
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
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
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgLabel.h"
#include "CATDlgSpinner.h"
#include "CATDlgFrame.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgLabel.h"
#include "CATDlgCombo.h"
#include "CATDlgFrame.h"
#include "CATNavigation3DViewer.h"
#include "CATDlgFrame.h"
#include "CATDlgEditor.h"
#include "CATDlgLabel.h"

// Begin of User Code

// End of User Code

CallEngineeringTemplate2Dlg::CallEngineeringTemplate2Dlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_FrameInput = NULL;
_Label1 = NULL;
_Label2 = NULL;
_Label3 = NULL;
_SelectorListAxisSystem = NULL;
_SelectorListMidInfPt = NULL;
_SelectorListSupportFace = NULL;
_Label27 = NULL;
_SelectorListGunTong2CenterPt = NULL;
_FramePDParam = NULL;
_Label4 = NULL;
_SpinnerPDKD = NULL;
_Label5 = NULL;
_SpinnerPDHD = NULL;
_Label6 = NULL;
_SpinnerPDCJ = NULL;
_Label16 = NULL;
_SpinnerSPDJZXXJL = NULL;
_Label17 = NULL;
_SpinnerXPDJZXXJL = NULL;
_FrameJTCS = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerJTZJC = NULL;
_SpinnerJTZJK = NULL;
_SpinnerJWZJC = NULL;
_SpinnerJWZJK = NULL;
_FrameDJLX1 = NULL;
_Label11 = NULL;
_SpinnerDJZTCD = NULL;
_Label12 = NULL;
_SpinnerDJZJ = NULL;
_Label13 = NULL;
_SpinnerDJC = NULL;
_Label14 = NULL;
_SpinnerJSJKD = NULL;
_Label15 = NULL;
_SpinnerJPDZXMJL = NULL;
_FrameDJLX2 = NULL;
_Label18 = NULL;
_Label19 = NULL;
_Label20 = NULL;
_SpinnerDJZTCD2 = NULL;
_SpinnerDJZJ2 = NULL;
_SpinnerDJC2 = NULL;
_Label21 = NULL;
_SpinnerJSJKD2 = NULL;
_Label22 = NULL;
_SpinnerJPDZXJL2 = NULL;
_FrameOtherParams = NULL;
_Label23 = NULL;
_ComboDJBZ = NULL;
_Label24 = NULL;
_ComboDJDS = NULL;
_Label25 = NULL;
_ComboDJWZ = NULL;
_Label26 = NULL;
_ComboDJZYC = NULL;
_FrameViewer = NULL;
_Navigation3DViewerModel = NULL;
_FrameLog = NULL;
_EditorUseSteps = NULL;
_LabelLog = NULL;

// Begin of User Code

// End of User Code

}

CallEngineeringTemplate2Dlg::~CallEngineeringTemplate2Dlg()
{

// Begin of User Code

// End of User Code
_FrameInput = NULL;
_Label1 = NULL;
_Label2 = NULL;
_Label3 = NULL;
_SelectorListAxisSystem = NULL;
_SelectorListMidInfPt = NULL;
_SelectorListSupportFace = NULL;
_Label27 = NULL;
_SelectorListGunTong2CenterPt = NULL;
_FramePDParam = NULL;
_Label4 = NULL;
_SpinnerPDKD = NULL;
_Label5 = NULL;
_SpinnerPDHD = NULL;
_Label6 = NULL;
_SpinnerPDCJ = NULL;
_Label16 = NULL;
_SpinnerSPDJZXXJL = NULL;
_Label17 = NULL;
_SpinnerXPDJZXXJL = NULL;
_FrameJTCS = NULL;
_Label7 = NULL;
_Label8 = NULL;
_Label9 = NULL;
_Label10 = NULL;
_SpinnerJTZJC = NULL;
_SpinnerJTZJK = NULL;
_SpinnerJWZJC = NULL;
_SpinnerJWZJK = NULL;
_FrameDJLX1 = NULL;
_Label11 = NULL;
_SpinnerDJZTCD = NULL;
_Label12 = NULL;
_SpinnerDJZJ = NULL;
_Label13 = NULL;
_SpinnerDJC = NULL;
_Label14 = NULL;
_SpinnerJSJKD = NULL;
_Label15 = NULL;
_SpinnerJPDZXMJL = NULL;
_FrameDJLX2 = NULL;
_Label18 = NULL;
_Label19 = NULL;
_Label20 = NULL;
_SpinnerDJZTCD2 = NULL;
_SpinnerDJZJ2 = NULL;
_SpinnerDJC2 = NULL;
_Label21 = NULL;
_SpinnerJSJKD2 = NULL;
_Label22 = NULL;
_SpinnerJPDZXJL2 = NULL;
_FrameOtherParams = NULL;
_Label23 = NULL;
_ComboDJBZ = NULL;
_Label24 = NULL;
_ComboDJDS = NULL;
_Label25 = NULL;
_ComboDJWZ = NULL;
_Label26 = NULL;
_ComboDJZYC = NULL;
_FrameViewer = NULL;
_Navigation3DViewerModel = NULL;
_FrameLog = NULL;
_EditorUseSteps = NULL;
_LabelLog = NULL;

}



void CallEngineeringTemplate2Dlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_FrameInput=new CATDlgFrame(this,(const char*)"FrameInput",0|CATDlgGridLayout);
_Label1=new CATDlgLabel(_FrameInput,(const char*)"Label1",0);
_Label2=new CATDlgLabel(_FrameInput,(const char*)"Label2",0);
_Label3=new CATDlgLabel(_FrameInput,(const char*)"Label3",0);
_SelectorListAxisSystem=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListAxisSystem",0);
_SelectorListMidInfPt=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListMidInfPt",0);
_SelectorListSupportFace=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListSupportFace",0);
_Label27=new CATDlgLabel(_FrameInput,(const char*)"Label27",0);
_SelectorListGunTong2CenterPt=new CATDlgSelectorList(_FrameInput,(const char*)"SelectorListGunTong2CenterPt",0);
_FramePDParam=new CATDlgFrame(this,(const char*)"FramePDParam",0|CATDlgGridLayout);
_Label4=new CATDlgLabel(_FramePDParam,(const char*)"Label4",0);
_SpinnerPDKD=new CATDlgSpinner(_FramePDParam,(const char*)"SpinnerPDKD",0|CATDlgSpnEntry);
_Label5=new CATDlgLabel(_FramePDParam,(const char*)"Label5",0);
_SpinnerPDHD=new CATDlgSpinner(_FramePDParam,(const char*)"SpinnerPDHD",0|CATDlgSpnEntry);
_Label6=new CATDlgLabel(_FramePDParam,(const char*)"Label6",0);
_SpinnerPDCJ=new CATDlgSpinner(_FramePDParam,(const char*)"SpinnerPDCJ",0|CATDlgSpnEntry);
_Label16=new CATDlgLabel(_FramePDParam,(const char*)"Label16",0);
_SpinnerSPDJZXXJL=new CATDlgSpinner(_FramePDParam,(const char*)"SpinnerSPDJZXXJL",0|CATDlgSpnEntry);
_Label17=new CATDlgLabel(_FramePDParam,(const char*)"Label17",0);
_SpinnerXPDJZXXJL=new CATDlgSpinner(_FramePDParam,(const char*)"SpinnerXPDJZXXJL",0|CATDlgSpnEntry);
_FrameJTCS=new CATDlgFrame(this,(const char*)"FrameJTCS",0|CATDlgGridLayout);
_Label7=new CATDlgLabel(_FrameJTCS,(const char*)"Label7",0);
_Label8=new CATDlgLabel(_FrameJTCS,(const char*)"Label8",0);
_Label9=new CATDlgLabel(_FrameJTCS,(const char*)"Label9",0);
_Label10=new CATDlgLabel(_FrameJTCS,(const char*)"Label10",0);
_SpinnerJTZJC=new CATDlgSpinner(_FrameJTCS,(const char*)"SpinnerJTZJC",0|CATDlgSpnEntry);
_SpinnerJTZJK=new CATDlgSpinner(_FrameJTCS,(const char*)"SpinnerJTZJK",0|CATDlgSpnEntry);
_SpinnerJWZJC=new CATDlgSpinner(_FrameJTCS,(const char*)"SpinnerJWZJC",0|CATDlgSpnEntry);
_SpinnerJWZJK=new CATDlgSpinner(_FrameJTCS,(const char*)"SpinnerJWZJK",0|CATDlgSpnEntry);
_FrameDJLX1=new CATDlgFrame(this,(const char*)"FrameDJLX1",0|CATDlgGridLayout);
_Label11=new CATDlgLabel(_FrameDJLX1,(const char*)"Label11",0);
_SpinnerDJZTCD=new CATDlgSpinner(_FrameDJLX1,(const char*)"SpinnerDJZTCD",0|CATDlgSpnEntry);
_Label12=new CATDlgLabel(_FrameDJLX1,(const char*)"Label12",0);
_SpinnerDJZJ=new CATDlgSpinner(_FrameDJLX1,(const char*)"SpinnerDJZJ",0|CATDlgSpnEntry);
_Label13=new CATDlgLabel(_FrameDJLX1,(const char*)"Label13",0);
_SpinnerDJC=new CATDlgSpinner(_FrameDJLX1,(const char*)"SpinnerDJC",0|CATDlgSpnEntry);
_Label14=new CATDlgLabel(_FrameDJLX1,(const char*)"Label14",0);
_SpinnerJSJKD=new CATDlgSpinner(_FrameDJLX1,(const char*)"SpinnerJSJKD",0|CATDlgSpnEntry);
_Label15=new CATDlgLabel(_FrameDJLX1,(const char*)"Label15",0);
_SpinnerJPDZXMJL=new CATDlgSpinner(_FrameDJLX1,(const char*)"SpinnerJPDZXMJL",0|CATDlgSpnEntry);
_FrameDJLX2=new CATDlgFrame(this,(const char*)"FrameDJLX2",0|CATDlgGridLayout);
_Label18=new CATDlgLabel(_FrameDJLX2,(const char*)"Label18",0);
_Label19=new CATDlgLabel(_FrameDJLX2,(const char*)"Label19",0);
_Label20=new CATDlgLabel(_FrameDJLX2,(const char*)"Label20",0);
_SpinnerDJZTCD2=new CATDlgSpinner(_FrameDJLX2,(const char*)"SpinnerDJZTCD2",0|CATDlgSpnEntry);
_SpinnerDJZJ2=new CATDlgSpinner(_FrameDJLX2,(const char*)"SpinnerDJZJ2",0|CATDlgSpnEntry);
_SpinnerDJC2=new CATDlgSpinner(_FrameDJLX2,(const char*)"SpinnerDJC2",0|CATDlgSpnEntry);
_Label21=new CATDlgLabel(_FrameDJLX2,(const char*)"Label21",0);
_SpinnerJSJKD2=new CATDlgSpinner(_FrameDJLX2,(const char*)"SpinnerJSJKD2",0|CATDlgSpnEntry);
_Label22=new CATDlgLabel(_FrameDJLX2,(const char*)"Label22",0);
_SpinnerJPDZXJL2=new CATDlgSpinner(_FrameDJLX2,(const char*)"SpinnerJPDZXJL2",0|CATDlgSpnEntry);
_FrameOtherParams=new CATDlgFrame(this,(const char*)"FrameOtherParams",0|CATDlgGridLayout);
_Label23=new CATDlgLabel(_FrameOtherParams,(const char*)"Label23",0);
_ComboDJBZ=new CATDlgCombo(_FrameOtherParams,(const char*)"ComboDJBZ",0|CATDlgCmbDropDown);
_Label24=new CATDlgLabel(_FrameOtherParams,(const char*)"Label24",0);
_ComboDJDS=new CATDlgCombo(_FrameOtherParams,(const char*)"ComboDJDS",0|CATDlgCmbDropDown);
_Label25=new CATDlgLabel(_FrameOtherParams,(const char*)"Label25",0);
_ComboDJWZ=new CATDlgCombo(_FrameOtherParams,(const char*)"ComboDJWZ",0|CATDlgCmbDropDown);
_Label26=new CATDlgLabel(_FrameOtherParams,(const char*)"Label26",0);
_ComboDJZYC=new CATDlgCombo(_FrameOtherParams,(const char*)"ComboDJZYC",0|CATDlgCmbDropDown);
_FrameViewer=new CATDlgFrame(this,(const char*)"FrameViewer",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_Navigation3DViewerModel=new CATNavigation3DViewer(_FrameViewer,(const char*)"Navigation3DViewerModel",
	0,500,400,0);
_FrameLog=new CATDlgFrame(this,(const char*)"FrameLog",0|CATDlgFraNoTitle|CATDlgFraNoFrame|CATDlgGridLayout);
_EditorUseSteps=new CATDlgEditor(_FrameLog,(const char*)"EditorUseSteps",0|CATDlgEdtReadOnly|CATDlgEdtMultiline);
_LabelLog=new CATDlgLabel(_FrameLog,(const char*)"LabelLog",0);
_FrameInput->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label1->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label2->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label3->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListAxisSystem->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListAxisSystem->SetVisibleTextHeight(1);
_SelectorListMidInfPt->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListMidInfPt->SetVisibleTextHeight(1);
_SelectorListSupportFace->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListSupportFace->SetVisibleTextHeight(1);
_Label27->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SelectorListGunTong2CenterPt->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_SelectorListGunTong2CenterPt->SetVisibleTextHeight(1);
_FramePDParam->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label4->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerPDKD->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPDKD->SetVisibleTextWidth(10);
_SpinnerPDKD->SetRange(100,2000,190);
_Label5->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerPDHD->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPDHD->SetVisibleTextWidth(10);
_SpinnerPDHD->SetRange(1,20,19);
_Label6->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerPDCJ->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerPDCJ->SetVisibleTextWidth(10);
_SpinnerPDCJ->SetRange(0,180,180);
_Label16->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerSPDJZXXJL->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerSPDJZXXJL->SetRange(0,1000,20);
_Label17->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerXPDJZXXJL->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerXPDJZXXJL->SetVisibleTextWidth(10);
_SpinnerXPDJZXXJL->SetRange(100,2000,190);
_FrameJTCS->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label7->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label8->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label9->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label10->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJTZJC->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJTZJC->SetVisibleTextWidth(10);
_SpinnerJTZJC->SetRange(100,2000,190);
_SpinnerJTZJK->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJTZJK->SetVisibleTextWidth(10);
_SpinnerJTZJK->SetRange(100,2000,190);
_SpinnerJWZJC->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJWZJC->SetVisibleTextWidth(10);
_SpinnerJWZJC->SetRange(100,2000,0.05f);
_SpinnerJWZJK->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJWZJK->SetVisibleTextWidth(10);
_SpinnerJWZJK->SetRange(100,2000,190);
_FrameDJLX1->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label11->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJZTCD->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZTCD->SetVisibleTextWidth(10);
_SpinnerDJZTCD->SetRange(100,2000,190);
_Label12->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJZJ->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZJ->SetVisibleTextWidth(10);
_SpinnerDJZJ->SetRange(0,2000,1000);
_Label13->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJC->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJC->SetVisibleTextWidth(10);
_SpinnerDJC->SetRange(0,2000,1000);
_Label14->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJSJKD->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJSJKD->SetVisibleTextWidth(10);
_SpinnerJSJKD->SetRange(0,1000,100);
_Label15->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJPDZXMJL->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJPDZXMJL->SetVisibleTextWidth(10);
_SpinnerJPDZXMJL->SetRange(0,3000,500);
_FrameDJLX2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label18->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label19->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_Label20->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerDJZTCD2->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZTCD2->SetVisibleTextWidth(10);
_SpinnerDJZTCD2->SetRange(0,3000,1000);
_SpinnerDJZJ2->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJZJ2->SetVisibleTextWidth(10);
_SpinnerDJZJ2->SetRange(0,1000,100);
_SpinnerDJC2->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerDJC2->SetVisibleTextWidth(10);
_SpinnerDJC2->SetRange(0,2000,100);
_Label21->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJSJKD2->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJSJKD2->SetVisibleTextWidth(10);
_SpinnerJSJKD2->SetRange(0,2000,100);
_Label22->SetGridConstraints(4,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_SpinnerJPDZXJL2->SetGridConstraints(4,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_SpinnerJPDZXJL2->SetVisibleTextWidth(10);
_SpinnerJPDZXJL2->SetRange(0,3000,1000);
_FrameOtherParams->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Label23->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboDJBZ->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Label24->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboDJDS->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Label25->SetGridConstraints(2,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboDJWZ->SetGridConstraints(2,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_Label26->SetGridConstraints(3,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_ComboDJZYC->SetGridConstraints(3,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_FrameViewer->SetGridConstraints(0,2,1,4,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_Navigation3DViewerModel->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_FrameLog->SetGridConstraints(3,0,2,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorUseSteps->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP|CATGRID_BOTTOM);
_EditorUseSteps->SetVisibleTextHeight(8);
_EditorUseSteps->SetVisibleTextWidth(15);
_LabelLog->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);

// Begin of User Code
this->SetGridColumnResizable(0, 1);
this->SetGridColumnResizable(1, 1);
this->SetGridColumnResizable(2, 1);
this->SetGridRowResizable(3, 1);
_FrameInput->SetGridColumnResizable(1, 1);
_FramePDParam->SetGridColumnResizable(1, 1);
_FrameJTCS->SetGridColumnResizable(1, 1);
_FrameDJLX1->SetGridColumnResizable(1, 1);
_FrameDJLX2->SetGridColumnResizable(1, 1);
_FrameOtherParams->SetGridColumnResizable(1, 1);
_FrameLog->SetGridColumnResizable(0, 1);
_FrameLog->SetGridRowResizable(0, 1);

_FrameViewer->SetGridColumnResizable(0, 1);
_FrameViewer->SetGridRowResizable(0, 1);
_SelectorListAxisSystem->SetLine("No Selection");
_SelectorListMidInfPt->SetLine("No Selection");
_SelectorListSupportFace->SetLine("No Selection");
_SelectorListGunTong2CenterPt->SetLine("No Selection");

_SpinnerPDKD->SetFormat("%g mm");
_SpinnerPDKD->SetCurrentValue((float)1000);
_SpinnerPDHD->SetFormat("%g mm");
_SpinnerPDHD->SetCurrentValue((float)10);
_SpinnerPDCJ->SetFormat("%g deg");
_SpinnerPDCJ->SetCurrentValue((float)35);
_SpinnerSPDJZXXJL->SetFormat("%g mm");
_SpinnerSPDJZXXJL->SetCurrentValue((float)400);
_SpinnerXPDJZXXJL->SetFormat("%g mm");
_SpinnerXPDJZXXJL->SetCurrentValue((float)300);

_SpinnerJTZJC->SetFormat("%g mm");
_SpinnerJTZJC->SetCurrentValue((float)1440);
_SpinnerJTZJK->SetFormat("%g mm");
_SpinnerJTZJK->SetCurrentValue((float)1100);
_SpinnerJWZJC->SetFormat("%g mm");
_SpinnerJWZJC->SetCurrentValue((float)1600);
_SpinnerJWZJK->SetFormat("%g mm");
_SpinnerJWZJK->SetCurrentValue((float)1600);

_SpinnerDJZTCD->SetFormat("%g mm");
_SpinnerDJZTCD->SetCurrentValue((float)1000);
_SpinnerDJZJ->SetFormat("%g mm");
_SpinnerDJZJ->SetCurrentValue((float)500);
_SpinnerDJC->SetFormat("%g mm");
_SpinnerDJC->SetCurrentValue((float)875.5);
_SpinnerJSJKD->SetFormat("%g mm");
_SpinnerJSJKD->SetCurrentValue((float)300);
_SpinnerJPDZXMJL->SetFormat("%g mm");
_SpinnerJPDZXMJL->SetCurrentValue((float)1000);

_SpinnerDJZTCD2->SetFormat("%g mm");
_SpinnerDJZTCD2->SetCurrentValue((float)2000);
_SpinnerDJZJ2->SetFormat("%g mm");
_SpinnerDJZJ2->SetCurrentValue((float)350);
_SpinnerDJC2->SetFormat("%g mm");
_SpinnerDJC2->SetCurrentValue((float)800);
_SpinnerJSJKD2->SetFormat("%g mm");
_SpinnerJSJKD2->SetCurrentValue((float)300);
_SpinnerJPDZXJL2->SetFormat("%g mm");
_SpinnerJPDZXJL2->SetCurrentValue((float)1000);

_ComboDJBZ->SetLine("Head");
_ComboDJBZ->SetLine("Tail");
_ComboDJBZ->SetSelect(0);
_ComboDJDS->SetLine("Single");
_ComboDJDS->SetLine("Double");
_ComboDJDS->SetSelect(0);
_ComboDJWZ->SetLine("Front");
_ComboDJWZ->SetLine("Back");
_ComboDJWZ->SetSelect(0);
_ComboDJZYC->SetLine("Left");
_ComboDJZYC->SetLine("Right");
_ComboDJZYC->SetSelect(1);
// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code

// End of User Code


// End of implementation of class methods
