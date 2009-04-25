#ifndef TIMECHECK_H
#define TIMECHECK_H

#include "System/Events/Timer.h"
#include "Framework/Transport/TransportReader.h"
#include "Framework/Transport/TransportWriter.h"
#include "Framework/Paxos/PaxosConfig.h"
#include "TimeCheckMsg.h"

#define TIMECHECK_PORT_OFFSET	3
#define NUMMSGS					50
#define SERIES_TIMEOUT			60*1000 // run every 60 seconds

class TimeCheck
{
public:
	TimeCheck();

	void				Init();

	void				OnRead();
	void				OnSeriesTimeout();
	void				NextSeries();
	
private:
	void				InitTransport();
	
	TransportReader*	reader;
	TransportWriter**	writers;
	MFunc<TimeCheck>	onRead;
	TimeCheckMsg		msg;
	
	MFunc<TimeCheck>	onSeriesTimeout;
	CdownTimer			seriesTimeout;
	
	ByteArray<1024>		data;
	uint64_t			series;
	int*				numReplies;
	double*				totalSkew;
};

#endif
