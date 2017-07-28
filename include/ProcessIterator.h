#ifndef W32ITERATOR_PROCESSITERATOR_H
#define W32ITERATOR_PROCESSITERATOR_H

#include <windows.h>
#include <tlhelp32.h>

#include "Exports.h"

class Process;

/**
 * Iterating over the processes provided the snapshot
 * (not the object inside ProcessVector).
 */
class W32_EXPORT ProcessIterator {
	// Snapshot of the processes presented by the os.
	HANDLE snapshot;
	// Copy of the snapshot ? Required to keep the state.
	PROCESSENTRY32 entry;
	// Created object, allocated on the vector.
	Process *ptr;
public:
	/*
	 * Default ctor.
	 * If failing to create the snapshot : begin == end
	 */
	ProcessIterator();

	ProcessIterator(const ProcessIterator& rhs);
	~ProcessIterator();
	
	ProcessIterator begin();
	ProcessIterator end();

	ProcessIterator operator++(int); // Post incr.
	ProcessIterator& operator++();   // Pre incr.

	// Deref, returning the IHandle object or directly the Entry -member ??
	/*
	&operator *();
	operator ->();
	*/
};

#endif
