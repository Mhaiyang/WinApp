#include "stdafx.h"
#include "Taylor.h"
#include "resource.h"

// The unique instance
TaylorApp theApp;

//BEGIN_MESSAGE_MAP(TaylorApp, CWinApp)
//END_MESSAGE_MAP()

BOOL TaylorApp::InitInstance()
{
	CWinApp::InitInstance();

	this->m_pMainWnd = new TaylorMainWindow;
	this->m_pMainWnd->ShowWindow(CWinApp::m_nCmdShow);
	this->m_pMainWnd->UpdateWindow();
	return TRUE;
}
int TaylorApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}

BEGIN_MESSAGE_MAP(TaylorMainWindow, CFrameWnd)
	ON_MESSAGE(WM_DESTROY, TaylorMainWindow::OnDestory)
	ON_WM_PAINT()
	ON_MESSAGE(WM_LBUTTONDOWN, TaylorMainWindow::OnLButtonDblClick)

	ON_COMMAND(ID_FILE_EXIT, TaylorMainWindow::OnFileExit)
	ON_COMMAND(ID_MENU_HELP, TaylorMainWindow::OnHelp)

END_MESSAGE_MAP()

TaylorMainWindow::TaylorMainWindow()
{
	Create(NULL, "FirstWindow", WS_OVERLAPPEDWINDOW, CFrameWnd::rectDefault, NULL, (LPCTSTR)IDR_MENU1);
}

afx_msg LRESULT TaylorMainWindow::OnDestory(WPARAM wParam, LPARAM lParam)
{
	PostQuitMessage(0);
	return 0;
}
afx_msg void TaylorMainWindow::OnPaint()
{
	CPaintDC dc(this);
	CRect rect(100, 100, 900, 150);		//light  top  right  bottom
	dc.DrawText("21709155  梅海洋  英文名：TaylorMei 电硕1707班   计算机科学与技术", -1, &rect, DT_SINGLELINE);
}

afx_msg LRESULT TaylorMainWindow::OnLButtonDblClick(WPARAM wParam, LPARAM lParam)
{
	MessageBox("You clicked Me", "Info");
	return 0;
}

void TaylorMainWindow::OnFileExit()
{
	this->DestroyWindow();
}
void TaylorMainWindow::OnHelp()
{
	MessageBox("Taylor will help you!", "Info");
}
