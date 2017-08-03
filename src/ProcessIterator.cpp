#include "ProcessIterator.h"
#include "Process.h"

ProcessIterator::ProcessIterator()
{
	//snapshot = CreateToolhelp32Snapshot ( TH32CS_SNAPPROCESS, 0 );
}

ProcessIterator::ProcessIterator(const ProcessIterator& rhs)
{
	snapshot = rhs.snapshot;
	entry = rhs.entry;
}

ProcessIterator::~ProcessIterator()
{
	if(snapshot != NULL)
		CloseHandle(snapshot);
}

ProcessIterator& ProcessIterator::operator=(const ProcessIterator& rhs)
{
	snapshot = rhs.snapshot;
	entry = rhs.entry;

	return *this;
}

ProcessIterator ProcessIterator::begin()
{
	return ProcessIterator();
}

ProcessIterator ProcessIterator::end()
{
	return ProcessIterator();
}

ProcessIterator ProcessIterator::operator++(int)
{
	return ProcessIterator();
}

ProcessIterator & ProcessIterator::operator++()
{
	// TODO: insert return statement here
}