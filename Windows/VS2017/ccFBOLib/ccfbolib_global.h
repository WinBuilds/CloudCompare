#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CCFBOLIB_LIB)
#  define CCFBOLIB_EXPORT Q_DECL_EXPORT
# else
#  define CCFBOLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define CCFBOLIB_EXPORT
#endif
