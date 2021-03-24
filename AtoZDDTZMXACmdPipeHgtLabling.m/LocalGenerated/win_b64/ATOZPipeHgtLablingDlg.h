

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZPipeHgtLablingDlg_h
#define ATOZPipeHgtLablingDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSpinner;
class CATDlgLabel;
class CATDlgEditor;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;

// Begin of User Code

// End of User Code

class  ATOZPipeHgtLablingDlg : public CATDlgDialog {
DeclareResource(ATOZPipeHgtLablingDlg, CATDlgDialog)

public:
	ATOZPipeHgtLablingDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZPipeHgtLablingDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZPipeHgtLablingDlg(const ATOZPipeHgtLablingDlg&);
	ATOZPipeHgtLablingDlg& operator= (const ATOZPipeHgtLablingDlg&);
	
private:
CATDlgFrame* _FrameInput;
CATDlgSelectorList* _SelectorListTarget;
CATDlgLabel* _Label1;
CATDlgFrame* _FrameScale;
CATDlgLabel* _Label2;
CATDlgSpinner* _SpinnerOffset;
CATDlgLabel* _Label3;
CATDlgEditor* _EditorScale;
CATDlgFrame* _FrameCenter;
CATDlgLabel* _Label4;
CATDlgSelectorList* _SelectorListLine;
CATDlgLabel* _Label5;
CATDlgSelectorList* _SelectorListPoint;

// Begin of User Code
friend class ATOZPipeHgtLablingCmd;
// End of User Code

};

#endif
