#ifndef W32ITERATOR_PROCESSVECTOR_H
#define W32ITERATOR_PROCESSVECTOR_H

#include <vector>

#include "Exports.h"
#include "ProcessIterator.h"

class Process;

/**
 *
 */
class W32_EXPORT ProcessVector {
	std::vector<Process *> processVector;
public:
	ProcessVector();
	~ProcessVector();


	ProcessIterator begin();
	ProcessIterator end();
};

#endif
