

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZCenterLinesCrtingDlg_h
#define ATOZCenterLinesCrtingDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;

// Begin of User Code

// End of User Code

class  ATOZCenterLinesCrtingDlg : public CATDlgDialog {
DeclareResource(ATOZCenterLinesCrtingDlg, CATDlgDialog)

public:
	ATOZCenterLinesCrtingDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZCenterLinesCrtingDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZCenterLinesCrtingDlg(const ATOZCenterLinesCrtingDlg&);
	ATOZCenterLinesCrtingDlg& operator= (const ATOZCenterLinesCrtingDlg&);
	
private:
CATDlgFrame* _FrameSelect;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListPipeProd;

// Begin of User Code
friend class ATOZCenterLinesCrtingCmd;
// End of User Code

};

#endif
