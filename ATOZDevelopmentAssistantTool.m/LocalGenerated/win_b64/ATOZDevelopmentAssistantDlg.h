

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef ATOZDevelopmentAssistantDlg_h
#define ATOZDevelopmentAssistantDlg_h

#include "CATDlgDialog.h"
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgEditor;
class CATDlgPushButton;
class CATDlgFrame;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgPushButton;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgLabel;
class CATDlgSelectorList;
class CATDlgFrame;
class CATDlgPushButton;
class CATNavigation3DViewer;

// Begin of User Code

// End of User Code

class  ATOZDevelopmentAssistantDlg : public CATDlgDialog {
DeclareResource(ATOZDevelopmentAssistantDlg, CATDlgDialog)

public:
	ATOZDevelopmentAssistantDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~ATOZDevelopmentAssistantDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	ATOZDevelopmentAssistantDlg(const ATOZDevelopmentAssistantDlg&);
	ATOZDevelopmentAssistantDlg& operator= (const ATOZDevelopmentAssistantDlg&);
	
private:
CATDlgFrame* _Frame1;
CATDlgLabel* _Label1;
CATDlgSelectorList* _SelectorList;
CATDlgEditor* _Editor;
CATDlgPushButton* _PushButton;
CATDlgFrame* _Frame2;
CATDlgLabel* _Label2;
CATDlgSelectorList* _SelectorListTest;
CATDlgPushButton* _PushButtonTest;
CATDlgLabel* _Label3;
CATDlgSelectorList* _SelectorMulti;
CATDlgLabel* _Label4;
CATDlgSelectorList* _SelectorListTest2;
CATDlgFrame* _Frame3;
CATDlgPushButton* _PushButtonFuncTest;
CATNavigation3DViewer* _Nav3DViewerModel;

// Begin of User Code
friend class ATOZDevelopmentAssistantCmd;
// End of User Code

};

#endif
