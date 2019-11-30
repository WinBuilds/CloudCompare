#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CCCORELIB_LIB)
#  define CCCORELIB_EXPORT Q_DECL_EXPORT
# else
#  define CCCORELIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define CCCORELIB_EXPORT
#endif
