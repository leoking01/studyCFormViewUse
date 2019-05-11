
// studyCFormViewUseView.h : CstudyCFormViewUseView 类的接口
//

#pragma once

#include "resource.h"


class CstudyCFormViewUseView : public CFormView
{
protected: // 仅从序列化创建
	CstudyCFormViewUseView();
	DECLARE_DYNCREATE(CstudyCFormViewUseView)

public:
	enum{ IDD = IDD_STUDYCFORMVIEWUSE_FORM };

// 特性
public:
	CstudyCFormViewUseDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CstudyCFormViewUseView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // studyCFormViewUseView.cpp 中的调试版本
inline CstudyCFormViewUseDoc* CstudyCFormViewUseView::GetDocument() const
   { return reinterpret_cast<CstudyCFormViewUseDoc*>(m_pDocument); }
#endif

