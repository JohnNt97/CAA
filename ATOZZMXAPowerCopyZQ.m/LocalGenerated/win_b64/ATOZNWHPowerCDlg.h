

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZNWHPowerCDlg_h
#define ATOZNWHPowerCDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgSpinner;
class CATDlgSpinner;
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

class  ATOZNWHPowerCDlg : public CATDlgDialog {
DeclareResource(ATOZNWHPowerCDlg, CATDlgDialog)

public:
	ATOZNWHPowerCDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZNWHPowerCDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZNWHPowerCDlg(const ATOZNWHPowerCDlg&);
	ATOZNWHPowerCDlg& operator= (const ATOZNWHPowerCDlg&);
	
private:
CATDlgFrame* _FrameInput;
CATDlgSelectorList* _SelectorListCenterLine;
CATDlgLabel* _Label2;
CATDlgSelectorList* _SelectorListHeadPlane;
CATDlgLabel* _Label3;
CATDlgSelectorList* _SelectorListTailPlane;
CATDlgLabel* _Label4;
CATDlgSelectorList* _SelectorListCenterPlane;
CATDlgLabel* _Label1;
CATDlgFrame* _FrameParam;
CATDlgLabel* _Label5;
CATDlgLabel* _Label6;
CATDlgLabel* _Label7;
CATDlgLabel* _Label8;
CATDlgLabel* _Label9;
CATDlgLabel* _Label10;
CATDlgSpinner* _SpinnerZLCount;
CATDlgSpinner* _SpinnerWDJD;
CATDlgSpinner* _SpinnerWDLength;
CATDlgSpinner* _SpinnerZJLength;
CATDlgSpinner* _SpinnerWidth;
CATDlgSpinner* _SpinnerHeight;
CATDlgLabel* _Label11;
CATDlgLabel* _Label12;
CATDlgLabel* _Label13;
CATDlgLabel* _Label14;
CATDlgLabel* _Label15;
CATDlgLabel* _Label16;
CATDlgSpinner* _SpinnerWinHeight;
CATDlgSpinner* _SpinnerWinUDloc;
CATDlgSpinner* _SpinnerWinFBLoc;
CATDlgSpinner* _SpinnerWDHalfWid;
CATDlgSpinner* _SpinnerWinWidth;
CATDlgSpinner* _SpinnerWall;
CATDlgFrame* _FrameLog;
CATDlgEditor* _EditorInstructions;
CATDlgLabel* _LabelLog;
CATDlgCheckButton* _CheckButton;
CATDlgFrame* _FrameViewer;
CATNavigation3DViewer* _Nav3DViewerModel;

// Begin of User Code
friend class ATOZNWHPowerCCmd;
// End of User Code

};

#endif
