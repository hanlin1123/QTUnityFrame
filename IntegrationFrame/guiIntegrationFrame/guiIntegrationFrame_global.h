#ifndef GUIINTEGRATIONFRAME_GLOBAL_H
#define GUIINTEGRATIONFRAME_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GUIINTEGRATIONFRAME_LIBRARY)
#  define GUI_API_EXPORT Q_DECL_EXPORT
#else
#  define GUI_API_EXPORT Q_DECL_IMPORT
#endif

#endif // GUIINTEGRATIONFRAME_GLOBAL_H