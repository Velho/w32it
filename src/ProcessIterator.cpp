#include "ProcessIterator.h"
#include "Process.h"

#include <windows.h>
#include <tlhelp32.h>


struct ProcessIterator::ProcessIteratorImpl {
	// Snapshot of the processes presented by the os.
	HANDLE snapshot;
	// Copy of the snapshot ? Required to keep the state.
	PROCESSENTRY32 entry;
};

ProcessIterator::ProcessIterator()
	: impl(new ProcessIteratorImpl)
{
	//snapshot = CreateToolhelp32Snapshot ( TH32CS_SNAPPROCESS, 0 );
}

ProcessIterator::ProcessIterator(const ProcessIterator& rhs)
	: impl(new ProcessIteratorImpl(*rhs.impl))
{
}

ProcessIterator::~ProcessIterator()
{
	if(impl->snapshot != NULL)
		CloseHandle(impl->snapshot);
}

ProcessIterator& ProcessIterator::operator=(const ProcessIterator& rhs)
{
	if (this != &rhs) {
		impl.reset(new ProcessIteratorImpl(*rhs.impl));
	}
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