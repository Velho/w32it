#ifndef W32ITERATOR_PROCESSITERATOR_H
#define W32ITERATOR_PROCESSITERATOR_H

#include "dllexport.h"

// Anything to forward declare from these ??
// TODO Move them to _impl !
#include <memory>

class Process;

/**
 * Iterating over the processes provided the snapshot
 * (not the object inside ProcessVector).
 */
class W32_EXPORT ProcessIterator {
	// Implementation details.
	struct ProcessIteratorImpl;
	std::unique_ptr<ProcessIteratorImpl> impl;
	// Created object, allocated on the vector.
	Process *ptr;
public:
	/*
	 * Default ctor.
	 * If failing to create the snapshot : begin == end
	 */
	ProcessIterator();

	ProcessIterator(const ProcessIterator&);
	ProcessIterator(ProcessIterator&&) = delete; // TODO
	~ProcessIterator();
	
	ProcessIterator& operator=(const ProcessIterator&);
	ProcessIterator operator=(ProcessIterator&&) = delete; // TODO

	ProcessIterator begin();
	ProcessIterator end();

	ProcessIterator operator++(int); // Post incr.
	ProcessIterator& operator++();   // Pre incr.

	// Deref, returning the IHandle object or directly the Entry -member ??
	// Finalizing the design requires these to be defined. Abstract it directly from ProcessIterator ?
	/*
	&operator *();
	operator ->();
	*/
};

#endif
