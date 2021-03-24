

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZAddFakeValueDlg_h
#define ATOZAddFakeValueDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgEditor;

// Begin of User Code

// End of User Code

class  ATOZAddFakeValueDlg : public CATDlgDialog {
DeclareResource(ATOZAddFakeValueDlg, CATDlgDialog)

public:
	ATOZAddFakeValueDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZAddFakeValueDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZAddFakeValueDlg(const ATOZAddFakeValueDlg&);
	ATOZAddFakeValueDlg& operator= (const ATOZAddFakeValueDlg&);
	
private:
CATDlgFrame* _Frame1;
CATDlgEditor* _Editor;

// Begin of User Code
friend class ATOZAddFakeValueCmd;
// End of User Code

};

#endif
