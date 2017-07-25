#ifndef W32ITERATOR_PROCESSVECTOR_H
#define W32ITERATOR_PROCESSVECTOR_H

#include <vector>
#include <windows.h>

#ifdef W32SHARED
#define W32 __declspec(dllexport)
#else
#define W32 __declspec(dllimport)
#endif


/**
 *
 */
class W32 ProcessVector {
	std::vector<Process *> processVector;
public:

};

#endif
