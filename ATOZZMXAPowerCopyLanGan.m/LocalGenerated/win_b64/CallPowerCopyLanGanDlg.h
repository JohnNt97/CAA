

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef CallPowerCopyLanGanDlg_h
#define CallPowerCopyLanGanDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgCombo;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgFrame;
class CATDlgEditor;
class CATDlgLabel;
class CATDlgCheckButton;
class CATDlgFrame;
class CATNavigation3DViewer;

// Begin of User Code

// End of User Code

class  CallPowerCopyLanGanDlg : public CATDlgDialog {
DeclareResource(CallPowerCopyLanGanDlg, CATDlgDialog)

public:
	CallPowerCopyLanGanDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~CallPowerCopyLanGanDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	CallPowerCopyLanGanDlg(const CallPowerCopyLanGanDlg&);
	CallPowerCopyLanGanDlg& operator= (const CallPowerCopyLanGanDlg&);
	
private:
CATDlgFrame* _FrameInput;
CATDlgLabel* _Label5;
CATDlgCombo* _ComboType;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListPath;
CATDlgFrame* _FrameParam;
CATDlgLabel* _Label2;
CATDlgLabel* _Label3;
CATDlgLabel* _Label4;
CATDlgSpinner* _SpinnerExc;
CATDlgSpinner* _SpinnerSep;
CATDlgSpinner* _SpinnerHeight;
CATDlgFrame* _FrameLog;
CATDlgEditor* _EditorInstructions;
CATDlgLabel* _LabelLog;
CATDlgCheckButton* _CheckButton;
CATDlgFrame* _FrameViewer;
CATNavigation3DViewer* _Nav3DViewerModel;

// Begin of User Code
friend class CallPowerCopyLanGanCmd;
// End of User Code

};

#endif
