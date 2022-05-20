#pragma once
#include "IStatistics.h"
#include <cmath>

class Std_statistics :public IStatistics
{
public:
	Std_statistics(std::list<long long>* val_list) :IStatistics(val_list) {};
	double get_indicator()const override;
	std::string get_name_indicator() const override;
};

