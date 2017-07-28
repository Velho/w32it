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

