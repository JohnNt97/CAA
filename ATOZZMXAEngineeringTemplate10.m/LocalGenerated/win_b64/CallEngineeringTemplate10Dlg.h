

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef CallEngineeringTemplate10Dlg_h
#define CallEngineeringTemplate10Dlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgPushButton;
class CATDlgFrame;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;

// Begin of User Code

// End of User Code

class  CallEngineeringTemplate10Dlg : public CATDlgDialog {
DeclareResource(CallEngineeringTemplate10Dlg, CATDlgDialog)

public:
	CallEngineeringTemplate10Dlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~CallEngineeringTemplate10Dlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	CallEngineeringTemplate10Dlg(const CallEngineeringTemplate10Dlg&);
	CallEngineeringTemplate10Dlg& operator= (const CallEngineeringTemplate10Dlg&);
	
private:
CATDlgFrame* _FrameInput;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListAxis;
CATDlgFrame* _FrameCompute;
CATDlgLabel* _Label2;
CATDlgLabel* _Label3;
CATDlgLabel* _Label4;
CATDlgSpinner* _SpinnerD1;
CATDlgSpinner* _SpinnerD2;
CATDlgSpinner* _SpinnerD3;
CATDlgLabel* _Label6;
CATDlgSpinner* _SpinnerT1;
CATDlgSpinner* _SpinnerT3;
CATDlgLabel* _Label8;
CATDlgSpinner* _SpinnerH;
CATDlgLabel* _Label5;
CATDlgSpinner* _SpinnerA;
CATDlgLabel* _Label7;
CATDlgFrame* _FrameLog;
CATDlgEditor* _EditorUseSteps;
CATDlgLabel* _LabelLog;
CATDlgFrame* _FrameViewer;
CATDlgLabel* _LabelView;
CATDlgPushButton* _PushButton;
CATDlgFrame* _FrameRef;
CATDlgFrame* _Frame1;
CATDlgEditor* _EditorV;
CATDlgLabel* _Label14;
CATDlgFrame* _Frame2;
CATDlgEditor* _Editorx;
CATDlgLabel* _Label15;
CATDlgFrame* _FrameParam;
CATDlgLabel* _Label11;
CATDlgLabel* _Label12;
CATDlgLabel* _Label13;
CATDlgSpinner* _SpinnerX;
CATDlgSpinner* _SpinnerT2;
CATDlgSpinner* _SpinnerR;

// Begin of User Code
friend class CallEngineeringTemplate10Cmd;
// End of User Code

};

#endif
