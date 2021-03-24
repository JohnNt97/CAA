

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef OutPutToolDlg_h
#define OutPutToolDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgPushButton;
class CATDlgMultiList;
class CATDlgLabel;
class CATDlgPushButton;

// Begin of User Code

// End of User Code

class  OutPutToolDlg : public CATDlgDialog {
DeclareResource(OutPutToolDlg, CATDlgDialog)

public:
	OutPutToolDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~OutPutToolDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	OutPutToolDlg(const OutPutToolDlg&);
	OutPutToolDlg& operator= (const OutPutToolDlg&);
	
private:
CATDlgFrame* _Frame;
CATDlgLabel* _Label1;
CATDlgPushButton* _PushButtonOpt;
CATDlgMultiList* _MultiListPoints;
CATDlgLabel* _Label2;
CATDlgPushButton* _PushButtonShow;

// Begin of User Code
friend class OutPutToolCmd;
// End of User Code

};

#endif
