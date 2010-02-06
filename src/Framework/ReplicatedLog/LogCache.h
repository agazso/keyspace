#ifndef LOGCACHE_H
#define LOGCACHE_H

#include "System/Buffer.h"
#include "Framework/Database/Table.h"

#define LOGCACHE_SIZE	10*1000 // # of Paxos rounds cached in db

class LogCache
{
public:
	LogCache();
	~LogCache();

	bool			Init();
	bool			Push(uint64_t paxosID, ByteString value);
	bool			Get(uint64_t paxosID, ByteString& value);

private:
	Table*			table;
	ByteArray<2*MB + 10*KB> value;
};

#endif
