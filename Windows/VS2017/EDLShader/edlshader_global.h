#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(EDLSHADER_LIB)
#  define EDLSHADER_EXPORT Q_DECL_EXPORT
# else
#  define EDLSHADER_EXPORT Q_DECL_IMPORT
# endif
#else
# define EDLSHADER_EXPORT
#endif
