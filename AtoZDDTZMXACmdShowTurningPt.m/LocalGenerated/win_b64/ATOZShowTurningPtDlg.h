

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZShowTurningPtDlg_h
#define ATOZShowTurningPtDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgEditor;
class CATDlgMultiList;

// Begin of User Code

// End of User Code

class  ATOZShowTurningPtDlg : public CATDlgDialog {
DeclareResource(ATOZShowTurningPtDlg, CATDlgDialog)

public:
	ATOZShowTurningPtDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZShowTurningPtDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZShowTurningPtDlg(const ATOZShowTurningPtDlg&);
	ATOZShowTurningPtDlg& operator= (const ATOZShowTurningPtDlg&);
	
private:
CATDlgFrame* _FramePipe;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListPipe;
CATDlgFrame* _Frame2;
CATDlgLabel* _Label2;
CATDlgEditor* _EditorFund;
CATDlgMultiList* _MultiListPoints;

// Begin of User Code
friend class ATOZShowTurningPtCmd;
// End of User Code

};

#endif
