#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CCCOREDLL_LIB)
#  define CCCOREDLL_EXPORT Q_DECL_EXPORT
# else
#  define CCCOREDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define CCCOREDLL_EXPORT
#endif
