
// studyCFormViewUseView.h : CstudyCFormViewUseView ��Ľӿ�
//

#pragma once

#include "resource.h"


class CstudyCFormViewUseView : public CFormView
{
protected: // �������л�����
	CstudyCFormViewUseView();
	DECLARE_DYNCREATE(CstudyCFormViewUseView)

public:
	enum{ IDD = IDD_STUDYCFORMVIEWUSE_FORM };

// ����
public:
	CstudyCFormViewUseDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CstudyCFormViewUseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
	virtual void OnDraw(CDC* /*pDC*/);
public:
	virtual BOOL OnDrop(COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // studyCFormViewUseView.cpp �еĵ��԰汾
inline CstudyCFormViewUseDoc* CstudyCFormViewUseView::GetDocument() const
   { return reinterpret_cast<CstudyCFormViewUseDoc*>(m_pDocument); }
#endif

