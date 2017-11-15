#pragma once

class TaylorApp : public CWinApp
{

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	//DECLARE_MESSAGE_MAP()

};

class TaylorMainWindow : public CFrameWnd
{
public:
	TaylorMainWindow();

protected:
	afx_msg LRESULT OnDestory(WPARAM wParam, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg LRESULT OnLButtonDblClick(WPARAM wParam, LPARAM lParam);

	void OnFileExit();
	void OnHelp();

	DECLARE_MESSAGE_MAP()
};

