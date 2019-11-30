#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCUSTOMPLOTLIB_LIB)
#  define QCUSTOMPLOTLIB_EXPORT Q_DECL_EXPORT
# else
#  define QCUSTOMPLOTLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCUSTOMPLOTLIB_EXPORT
#endif
