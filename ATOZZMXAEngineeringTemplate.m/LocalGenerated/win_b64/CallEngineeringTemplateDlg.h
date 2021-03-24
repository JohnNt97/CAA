

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef CallEngineeringTemplateDlg_h
#define CallEngineeringTemplateDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
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
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgFrame;
class CATDlgFrame;
class CATDlgLabel;
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
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;
class CATDlgFrame;
class CATNavigation3DViewer;

// Begin of User Code

// End of User Code

class  CallEngineeringTemplateDlg : public CATDlgDialog {
DeclareResource(CallEngineeringTemplateDlg, CATDlgDialog)

public:
	CallEngineeringTemplateDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~CallEngineeringTemplateDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	CallEngineeringTemplateDlg(const CallEngineeringTemplateDlg&);
	CallEngineeringTemplateDlg& operator= (const CallEngineeringTemplateDlg&);
	
private:
CATDlgFrame* _FrameC2;
CATDlgFrame* _FrameDJParams;
CATDlgLabel* _Label10;
CATDlgSpinner* _SpinnerDJZTCD;
CATDlgLabel* _Label11;
CATDlgSpinner* _SpinnerDJZJ;
CATDlgLabel* _Label12;
CATDlgSpinner* _SpinnerJSJK;
CATDlgFrame* _FrameOtherParam;
CATDlgLabel* _Label13;
CATDlgSpinner* _SpinnerOtherZJCJTJL;
CATDlgLabel* _Label14;
CATDlgSpinner* _SpinnerZJCJWJL;
CATDlgLabel* _Label15;
CATDlgSpinner* _SpinnerOtherZJCK;
CATDlgLabel* _Label16;
CATDlgSpinner* _SpinnerOtherZJCG;
CATDlgLabel* _Label17;
CATDlgSpinner* _SpinnerOtherGZBJ;
CATDlgLabel* _Label18;
CATDlgSpinner* _SpinnerOtherZMZLSL;
CATDlgLabel* _Label19;
CATDlgCombo* _ComboZMFX;
CATDlgFrame* _FrameC1;
CATDlgFrame* _FrameSelInput;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListHeadPoint;
CATDlgLabel* _Label2;
CATDlgSelectorList* _SelectorListTailPoint;
CATDlgFrame* _FrameHeadParam;
CATDlgLabel* _Label3;
CATDlgSpinner* _SpinnerHeadLength;
CATDlgLabel* _Label4;
CATDlgSpinner* _SpinnerHeadDMJZXX;
CATDlgLabel* _Label5;
CATDlgSpinner* _SpinnerHeadD1MJZXXX;
CATDlgFrame* _FrameTailParams;
CATDlgLabel* _Label6;
CATDlgSpinner* _SpinnerTailLength;
CATDlgLabel* _Label7;
CATDlgSpinner* _SpinnerTailD2MJZXX;
CATDlgLabel* _Label8;
CATDlgSpinner* _SpinnerTailDZG;
CATDlgLabel* _Label9;
CATDlgSpinner* _SpinnerTailJCC;
CATDlgFrame* _FrameInstructions;
CATDlgEditor* _EditorInstructions;
CATDlgLabel* _LabelLog;
CATDlgFrame* _FrameView;
CATNavigation3DViewer* _Nav3DViewerModel;

// Begin of User Code
friend class CallEngineeringTemplateCmd;
// End of User Code

};

#endif
