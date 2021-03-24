

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZPipeProjAnnoDlg_h
#define ATOZPipeProjAnnoDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgPushButton;
class CATDlgPushButton;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgPushButton;
class CATDlgPushButton;

// Begin of User Code

// End of User Code

class  ATOZPipeProjAnnoDlg : public CATDlgDialog {
DeclareResource(ATOZPipeProjAnnoDlg, CATDlgDialog)

public:
	ATOZPipeProjAnnoDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZPipeProjAnnoDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZPipeProjAnnoDlg(const ATOZPipeProjAnnoDlg&);
	ATOZPipeProjAnnoDlg& operator= (const ATOZPipeProjAnnoDlg&);
	
private:
CATDlgFrame* _FramePipe;
CATDlgLabel* _Label;
CATDlgSelectorList* _SelectorListLine1;
CATDlgLabel* _Label4;
CATDlgSelectorList* _SelectorListLine2;
CATDlgPushButton* _ButtonGenView;
CATDlgPushButton* _PushButtonBrowseView;
CATDlgFrame* _FrameDrw;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorListDrw;
CATDlgLabel* _Label2;
CATDlgSelectorList* _SelectorListPipeProd;
CATDlgFrame* _FrameList;
CATDlgPushButton* _ButtonOpen;
CATDlgPushButton* _PushButtonDelete;

// Begin of User Code
friend class ATOZPipeProjAnnoCmd;
// End of User Code

};

#endif
