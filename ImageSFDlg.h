#if !defined(AFX_IMAGESFDLG_H__E5FA0ACB_DA44_4946_A82A_237D2C8E9BC7__INCLUDED_)
#define AFX_IMAGESFDLG_H__E5FA0ACB_DA44_4946_A82A_237D2C8E9BC7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ImageSFDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CImageSFDlg dialog

class CImageSFDlg : public CDialog
{
// Construction
public:
	CImageSFDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CImageSFDlg)
	enum { IDD = IDD_DIALOG_SF };
	int		m_sfbs;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageSFDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CImageSFDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGESFDLG_H__E5FA0ACB_DA44_4946_A82A_237D2C8E9BC7__INCLUDED_)
