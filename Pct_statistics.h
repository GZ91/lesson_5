#pragma once
#include <cmath>
#include "IStatistics.h"

class Pct_statistics :public IStatistics
{
public:
	Pct_statistics(std::list<long long>* val_list, int val_pct) :IStatistics(val_list), val_pct{ val_pct } {};
	double get_indicator()const override;
	std::string get_name_indicator() const override;
private:
	int val_pct;
};

