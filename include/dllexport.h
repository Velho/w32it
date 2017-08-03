#ifndef W32ITERATOR_EXPORTS_H
#define W32ITERATOR_EXPORTS_H

#ifdef W32SHARED
#define W32_EXPORT __declspec(dllexport)
#else
#define W32_EXPORT __declspec(dllimport)
#endif

#endif
