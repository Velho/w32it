#ifndef W32ITERATOR_HANDLEINTERFACE_H
#define W32ITERATOR_HANDLEINTERFACE_H

#include "dllexport.h"

/**
 * Defines a interface for the handle object.
 */
class W32_EXPORT IHandle {
	using HANDLE = void *;
protected:
	HANDLE handle;
public:
	virtual ~IHandle() {}

	virtual HANDLE getHandle()
	{
		return handle;
	}
};

#endif
