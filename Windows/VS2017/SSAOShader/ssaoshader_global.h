#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SSAOSHADER_LIB)
#  define SSAOSHADER_EXPORT Q_DECL_EXPORT
# else
#  define SSAOSHADER_EXPORT Q_DECL_IMPORT
# endif
#else
# define SSAOSHADER_EXPORT
#endif
