#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CCFBODLL_LIB)
#  define CCFBODLL_EXPORT Q_DECL_EXPORT
# else
#  define CCFBODLL_EXPORT /*Q_DECL_IMPORT*/
# endif
#else
# define CCFBODLL_EXPORT
#endif
