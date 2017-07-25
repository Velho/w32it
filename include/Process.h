#ifndef W32ITERATOR_PROCESS_H
#define W32ITERATOR_PROCESS_H

#include "IHandle.h"

#ifdef W32SHARED
#define W32 __declspec(dllexport)
#else
#define W32 __declspec(dllimport)
#endif


/**
 *
 */
class W32 Process : public IHandle {
public:
	Process();
	~Process();

};


#endif
