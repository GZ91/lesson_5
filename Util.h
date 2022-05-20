#pragma once
#include <list>
#include <ostream>
#include <iomanip>
#include "IStatistics.h"
#include "Min_statistics.h"
#include "Max_statistics.h"
#include "Mean_statistics.h"
#include "Std_statistics.h"
#include "Pct_statistics.h"

class Util
{
public:
	Util(std::list<long long>& list_value, std::ostream &output);
	~Util();
	void print_statistics();

private:
	std::list<IStatistics*> list_statistic;
	std::ostream &output;
};


