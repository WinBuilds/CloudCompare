#pragma once

#include <QtCore/QtGlobal>

#ifndef BUILD_STATIC
# if defined(QCC_GL_LIBRARY_BUILD)
#  define QCC_GL_LIB_API Q_DECL_EXPORT
# else
#  define QCC_GL_LIB_API Q_DECL_IMPORT
# endif
#else
# define QCC_GL_LIB_API
#endif


