

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef BrowserViewsDlg_h
#define BrowserViewsDlg_h

#include "CATDlgDialog.h"
class CATDlgPushButton;
class CATDlgPushButton;
class CATDlgPushButton;
class CATDlgPushButton;
class CATDlgPushButton;
class CATDlgFrame;
class CATNavigation3DViewer;

// Begin of User Code

// End of User Code

class  BrowserViewsDlg : public CATDlgDialog {
DeclareResource(BrowserViewsDlg, CATDlgDialog)

public:
	BrowserViewsDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~BrowserViewsDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	BrowserViewsDlg(const BrowserViewsDlg&);
	BrowserViewsDlg& operator= (const BrowserViewsDlg&);
	
private:
CATDlgPushButton* _PushButtonReverse;
CATDlgPushButton* _PushButtonL30;
CATDlgPushButton* _PushButtonR30;
CATDlgPushButton* _PushButtonR90;
CATDlgPushButton* _PushButtonL90;
CATDlgFrame* _FrameView;
CATNavigation3DViewer* _Navi3DViewer;

// Begin of User Code
friend class ATOZPipeProjAnnoCmd;
// End of User Code

};

#endif
