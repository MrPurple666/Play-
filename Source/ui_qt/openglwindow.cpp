#include "openglwindow.h"

OpenGLWindow::OpenGLWindow(QWindow* parent)
    : OutputWindow(parent)
{
	setSurfaceType(QWindow::OpenGLSurface);
	setFormat(GetSurfaceFormat());
}

QSurfaceFormat OpenGLWindow::GetSurfaceFormat()
{
	QSurfaceFormat format;
#if defined(GLES_COMPATIBILITY)
	format.setVersion(3, 0);
#else
//	format.setVersion(3, 1);
#endif
//	format.setProfile(QSurfaceFormat::NoProfile);
	format.setSwapBehavior(QSurfaceFormat::DoubleBuffer);
	format.setAlphaBufferSize(0);
	return format;
}
