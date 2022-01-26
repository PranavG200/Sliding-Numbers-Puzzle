
// ChildView.h : interface of the CChildView class
//


#pragma once

#include "SlidingPuzzleDocument.h"

// CChildView window

class CChildView : public CWnd
{
// Construction
public:
	CChildView(CSlidingPuzzleDocument *pDocument);

// Attributes
public:

// Operations
public:
	void GameOver();

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()

private:
	CSlidingPuzzleDocument *m_pDocument;
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

