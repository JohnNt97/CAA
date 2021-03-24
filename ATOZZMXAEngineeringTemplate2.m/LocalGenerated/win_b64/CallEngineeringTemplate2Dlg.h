

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef CallEngineeringTemplate2Dlg_h
#define CallEngineeringTemplate2Dlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgSelectorList;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgFrame;
class CATNavigation3DViewer;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;

// Begin of User Code

// End of User Code

class  CallEngineeringTemplate2Dlg : public CATDlgDialog {
DeclareResource(CallEngineeringTemplate2Dlg, CATDlgDialog)

public:
	CallEngineeringTemplate2Dlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~CallEngineeringTemplate2Dlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	CallEngineeringTemplate2Dlg(const CallEngineeringTemplate2Dlg&);
	CallEngineeringTemplate2Dlg& operator= (const CallEngineeringTemplate2Dlg&);
	
private:
CATDlgFrame* _FrameInput;
CATDlgLabel* _Label1;
CATDlgLabel* _Label2;
CATDlgLabel* _Label3;
CATDlgSelectorList* _SelectorListAxisSystem;
CATDlgSelectorList* _SelectorListMidInfPt;
CATDlgSelectorList* _SelectorListSupportFace;
CATDlgLabel* _Label27;
CATDlgSelectorList* _SelectorListGunTong2CenterPt;
CATDlgFrame* _FramePDParam;
CATDlgLabel* _Label4;
CATDlgSpinner* _SpinnerPDKD;
CATDlgLabel* _Label5;
CATDlgSpinner* _SpinnerPDHD;
CATDlgLabel* _Label6;
CATDlgSpinner* _SpinnerPDCJ;
CATDlgLabel* _Label16;
CATDlgSpinner* _SpinnerSPDJZXXJL;
CATDlgLabel* _Label17;
CATDlgSpinner* _SpinnerXPDJZXXJL;
CATDlgFrame* _FrameJTCS;
CATDlgLabel* _Label7;
CATDlgLabel* _Label8;
CATDlgLabel* _Label9;
CATDlgLabel* _Label10;
CATDlgSpinner* _SpinnerJTZJC;
CATDlgSpinner* _SpinnerJTZJK;
CATDlgSpinner* _SpinnerJWZJC;
CATDlgSpinner* _SpinnerJWZJK;
CATDlgFrame* _FrameDJLX1;
CATDlgLabel* _Label11;
CATDlgSpinner* _SpinnerDJZTCD;
CATDlgLabel* _Label12;
CATDlgSpinner* _SpinnerDJZJ;
CATDlgLabel* _Label13;
CATDlgSpinner* _SpinnerDJC;
CATDlgLabel* _Label14;
CATDlgSpinner* _SpinnerJSJKD;
CATDlgLabel* _Label15;
CATDlgSpinner* _SpinnerJPDZXMJL;
CATDlgFrame* _FrameDJLX2;
CATDlgLabel* _Label18;
CATDlgLabel* _Label19;
CATDlgLabel* _Label20;
CATDlgSpinner* _SpinnerDJZTCD2;
CATDlgSpinner* _SpinnerDJZJ2;
CATDlgSpinner* _SpinnerDJC2;
CATDlgLabel* _Label21;
CATDlgSpinner* _SpinnerJSJKD2;
CATDlgLabel* _Label22;
CATDlgSpinner* _SpinnerJPDZXJL2;
CATDlgFrame* _FrameOtherParams;
CATDlgLabel* _Label23;
CATDlgCombo* _ComboDJBZ;
CATDlgLabel* _Label24;
CATDlgCombo* _ComboDJDS;
CATDlgLabel* _Label25;
CATDlgCombo* _ComboDJWZ;
CATDlgLabel* _Label26;
CATDlgCombo* _ComboDJZYC;
CATDlgFrame* _FrameViewer;
CATNavigation3DViewer* _Navigation3DViewerModel;
CATDlgFrame* _FrameLog;
CATDlgEditor* _EditorUseSteps;
CATDlgLabel* _LabelLog;

// Begin of User Code
friend class CallEngineeringTemplate2Cmd;
// End of User Code

};

#endif
