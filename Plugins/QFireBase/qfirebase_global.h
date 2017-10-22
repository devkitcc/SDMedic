#ifndef QFIREBASE_GLOBAL_H
#define QFIREBASE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QFIREBASE_LIBRARY)
#  define QFIREBASESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QFIREBASESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QFIREBASE_GLOBAL_H
