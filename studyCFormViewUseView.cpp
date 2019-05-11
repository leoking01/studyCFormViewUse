
// studyCFormViewUseView.cpp : CstudyCFormViewUseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "studyCFormViewUse.h"
#endif

#include "studyCFormViewUseDoc.h"
#include "studyCFormViewUseView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CstudyCFormViewUseView

IMPLEMENT_DYNCREATE(CstudyCFormViewUseView, CFormView)

BEGIN_MESSAGE_MAP(CstudyCFormViewUseView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CstudyCFormViewUseView 构造/析构

CstudyCFormViewUseView::CstudyCFormViewUseView()
	: CFormView(CstudyCFormViewUseView::IDD)
{
	// TODO: 在此处添加构造代码

}

CstudyCFormViewUseView::~CstudyCFormViewUseView()
{
}

void CstudyCFormViewUseView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CstudyCFormViewUseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CFormView::PreCreateWindow(cs);
}

void CstudyCFormViewUseView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

void CstudyCFormViewUseView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CstudyCFormViewUseView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CstudyCFormViewUseView 诊断

#ifdef _DEBUG
void CstudyCFormViewUseView::AssertValid() const
{
	CFormView::AssertValid();
}

void CstudyCFormViewUseView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CstudyCFormViewUseDoc* CstudyCFormViewUseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CstudyCFormViewUseDoc)));
	return (CstudyCFormViewUseDoc*)m_pDocument;
}
#endif //_DEBUG


// CstudyCFormViewUseView 消息处理程序


void CstudyCFormViewUseView::OnDraw(CDC* pDC)
{
	// TODO: 在此添加专用代码和/或调用基类


	CDocument* pDoc = GetDocument();
	// TODO: 在此添加绘制代码

	pDC->MoveTo(0,50);
	pDC->LineTo(200,200);

	CRect rt(0,50,200,200);
	pDC->DrawText(_T("00这是在对话框上创建的视图"),&rt,DT_LEFT);

}


BOOL CstudyCFormViewUseView::OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
	// TODO: 在此添加专用代码和/或调用基类

	return CFormView::OnDrop(pDataObject, dropEffect, point);
}


void CstudyCFormViewUseView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CFormView::OnLButtonDblClk(nFlags, point);
}


void CstudyCFormViewUseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CFormView::OnLButtonDown(nFlags, point);
}


void CstudyCFormViewUseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CFormView::OnLButtonUp(nFlags, point);
}
