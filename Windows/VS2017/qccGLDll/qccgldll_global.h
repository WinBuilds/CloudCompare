#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCCGLDLL_LIB)
#  define QCCGLDLL_EXPORT Q_DECL_EXPORT
# else
#  define QCCGLDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCCGLDLL_EXPORT
#endif
