#pragma once
// CPenViewStatic
#include <afxwin.h>
#include "dib.h"

class CVideoStatic : public CStatic
{
	DECLARE_DYNAMIC(CVideoStatic)

public:
	CVideoStatic();
	virtual ~CVideoStatic();

	DECLARE_MESSAGE_MAP()

protected:
	afx_msg void OnPaint();

private:
	CDib dib_;
	/*HDC mem_dc_;
	CRect rect_;*/
	uint32_t width_;
	uint32_t height_;
};


