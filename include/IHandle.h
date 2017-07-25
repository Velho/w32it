#ifndef W32ITERATOR_HANDLEINTERFACE_H
#define W32ITERATOR_HANDLEINTERFACE_H

#ifdef W32SHARED
#define W32 __declspec(dllexport)
#else
#define W32 __declspec(dllimport)
#endif

/**
 * Defines a interface for the handle object.
 */
class W32 IHandle {
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
