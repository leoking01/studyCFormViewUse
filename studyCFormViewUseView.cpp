
// studyCFormViewUseView.cpp : CstudyCFormViewUseView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CstudyCFormViewUseView ����/����

CstudyCFormViewUseView::CstudyCFormViewUseView()
	: CFormView(CstudyCFormViewUseView::IDD)
{
	// TODO: �ڴ˴���ӹ������

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
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

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


// CstudyCFormViewUseView ���

#ifdef _DEBUG
void CstudyCFormViewUseView::AssertValid() const
{
	CFormView::AssertValid();
}

void CstudyCFormViewUseView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CstudyCFormViewUseDoc* CstudyCFormViewUseView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CstudyCFormViewUseDoc)));
	return (CstudyCFormViewUseDoc*)m_pDocument;
}
#endif //_DEBUG


// CstudyCFormViewUseView ��Ϣ�������


void CstudyCFormViewUseView::OnDraw(CDC* pDC)
{
	// TODO: �ڴ����ר�ô����/����û���


	CDocument* pDoc = GetDocument();
	// TODO: �ڴ���ӻ��ƴ���

	pDC->MoveTo(0,50);
	pDC->LineTo(200,200);

	CRect rt(0,50,200,200);
	pDC->DrawText(_T("00�����ڶԻ����ϴ�������ͼ"),&rt,DT_LEFT);

}


BOOL CstudyCFormViewUseView::OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point)
{
	// TODO: �ڴ����ר�ô����/����û���

	return CFormView::OnDrop(pDataObject, dropEffect, point);
}


void CstudyCFormViewUseView::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CFormView::OnLButtonDblClk(nFlags, point);
}


void CstudyCFormViewUseView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CFormView::OnLButtonDown(nFlags, point);
}


void CstudyCFormViewUseView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CFormView::OnLButtonUp(nFlags, point);
}
