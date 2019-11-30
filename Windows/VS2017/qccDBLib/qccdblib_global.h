#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCCDBLIB_LIB)
#  define QCCDBLIB_EXPORT Q_DECL_EXPORT
# else
#  define QCCDBLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCCDBLIB_EXPORT
#endif
