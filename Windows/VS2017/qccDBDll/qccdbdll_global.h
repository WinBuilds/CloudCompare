#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCCDBDLL_LIB)
#  define QCCDBDLL_EXPORT Q_DECL_EXPORT
# else
#  define QCCDBDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCCDBDLL_EXPORT
#endif
