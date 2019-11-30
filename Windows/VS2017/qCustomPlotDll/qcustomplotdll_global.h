#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCUSTOMPLOTDLL_LIB)
#  define QCUSTOMPLOTDLL_EXPORT Q_DECL_EXPORT
# else
#  define QCUSTOMPLOTDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCUSTOMPLOTDLL_EXPORT
#endif
