﻿
// G24W03MFC_View.cpp: CG24W03MFCView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "G24W03MFC_.h"
#endif

#include "G24W03MFC_Doc.h"
#include "G24W03MFC_View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CG24W03MFCView

IMPLEMENT_DYNCREATE(CG24W03MFCView, CView)

BEGIN_MESSAGE_MAP(CG24W03MFCView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CG24W03MFCView 생성/소멸

CG24W03MFCView::CG24W03MFCView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CG24W03MFCView::~CG24W03MFCView()
{
}

BOOL CG24W03MFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CG24W03MFCView 그리기

void CG24W03MFCView::OnDraw(CDC* /*pDC*/)
{
	CG24W03MFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CG24W03MFCView 인쇄

BOOL CG24W03MFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CG24W03MFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CG24W03MFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CG24W03MFCView 진단

#ifdef _DEBUG
void CG24W03MFCView::AssertValid() const
{
	CView::AssertValid();
}

void CG24W03MFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CG24W03MFCDoc* CG24W03MFCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CG24W03MFCDoc)));
	return (CG24W03MFCDoc*)m_pDocument;
}
#endif //_DEBUG


// CG24W03MFCView 메시지 처리기
