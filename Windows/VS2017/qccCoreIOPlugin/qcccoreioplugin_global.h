#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCCCOREIOPLUGIN_LIB)
#  define QCCCOREIOPLUGIN_EXPORT Q_DECL_EXPORT
# else
#  define QCCCOREIOPLUGIN_EXPORT Q_DECL_IMPORT
# endif
#else
# define QCCCOREIOPLUGIN_EXPORT
#endif
