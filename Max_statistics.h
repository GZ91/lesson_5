#pragma once
#include "IStatistics.h"

class Max_statistics:public IStatistics
{
public:
	Max_statistics(std::list<long long>* val_list) :IStatistics(val_list) {};
	double get_indicator()const override;
	std::string get_name_indicator() const override;
};

