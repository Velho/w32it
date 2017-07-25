#ifndef W32ITERATOR_PROCESSITERATOR_H
#define W32ITERATOR_PROCESSITERATOR_H

#ifdef W32SHARED
#define W32 __declspec(dllexport)
#else
#define W32 __declspec(dllimport)
#endif

/**
 * Iterating over the processes provided the snapshot
 * (not the object inside ProcessVector).
 */
class W32 ProcessIterator {
	HANDLE snapshot;
	// Copy of the snapshot ? Required to keep the state
	PROCESSENTRY32 entry;
public:
	/*
	 * Default ctor.
	 * If failing to create the snapshot : begin == end
	 */
	Iterator()
	{
		snapshot = CreateToolhelp32Snapshot ( TH32CS_SNAPPROCESS, 0 );
	}

	Iterator(const Iterator& rhs)
	{
		snapshot = rhs.snapshot;
		entry = rhs.entry;
	}

	~Iterator()
	{
		if(snapshot != NULL)
			CloseHandle(snapshot);
	}

	Iterator begin();
	Iterator end();

	Iterator operator++(int); // Post incr.
	Iterator& operator++();   // Pre incr.

	// Deref, returning the IHandle object or directly the Entry -member ??
	/*
	&operator *();
	operator ->();
	*/
};

#endif
