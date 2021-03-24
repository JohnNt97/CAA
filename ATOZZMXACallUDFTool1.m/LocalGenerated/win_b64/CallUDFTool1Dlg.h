

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef CallUDFTool1Dlg_h
#define CallUDFTool1Dlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgSelectorList;
class CATDlgSelectorList;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgCheckButton;
class CATDlgFrame;
class CATNavigation3DViewer;
class CATDlgLabel;

// Begin of User Code
#include "CATDlgProgress.h"
// End of User Code

class  CallUDFTool1Dlg : public CATDlgDialog {
DeclareResource(CallUDFTool1Dlg, CATDlgDialog)

public:
	CallUDFTool1Dlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~CallUDFTool1Dlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	CallUDFTool1Dlg(const CallUDFTool1Dlg&);
	CallUDFTool1Dlg& operator= (const CallUDFTool1Dlg&);
	
private:
CATDlgFrame* _FrameProgress;
CATDlgLabel* _Label11;
CATDlgFrame* _FrameIn;
CATDlgLabel* _Label1;
CATDlgLabel* _Label2;
CATDlgLabel* _Label3;
CATDlgLabel* _Label4;
CATDlgLabel* _Label5;
CATDlgLabel* _Label6;
CATDlgSelectorList* _SelectorListBtPlaneM;
CATDlgSelectorList* _SelectorListSur;
CATDlgSelectorList* _SelectorListBtPlaneF;
CATDlgSelectorList* _SelectorListXY;
CATDlgFrame* _FrameParam;
CATDlgLabel* _Label7;
CATDlgLabel* _Label8;
CATDlgLabel* _Label9;
CATDlgLabel* _Label10;
CATDlgSpinner* _SpinnerPlane1;
CATDlgSpinner* _SpinnerPlane2;
CATDlgSpinner* _SpinnerPlane3;
CATDlgSpinner* _SpinnerPlane4;
CATDlgCheckButton* _CheckButton;
CATDlgFrame* _FrameViewer;
CATNavigation3DViewer* _Nav3DViewerModel;
CATDlgLabel* _LabelLog;

// Begin of User Code
CATDlgProgress * _pDlgProgress;
friend class CallUDFTool1Cmd;

// End of User Code

};

#endif
