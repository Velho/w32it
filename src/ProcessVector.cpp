#include "ProcessVector.h"
#include "Process.h"

ProcessVector::ProcessVector()
{
}

ProcessVector::~ProcessVector()
{
	for(auto process : processVector) {
		if(process != nullptr)
			delete process;
	}
}

ProcessIterator ProcessVector::begin()
{
	return ProcessIterator();
}

ProcessIterator ProcessVector::end()
{
	return ProcessIterator();
}
