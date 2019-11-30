#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QCORE_IO_PLUGIN_EXPORTS)
#  define QCOREIODLL_EXPORT Q_DECL_EXPORT
# else
#  define QCOREIODLL_EXPORT /*Q_DECL_IMPORT*/
# endif
#else
# define QCOREIODLL_EXPORT
#endif
