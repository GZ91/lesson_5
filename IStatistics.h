#pragma once
#include <list>
#include <string>

class IStatistics
{
public:
	IStatistics(std::list<long long>* indic) :indicators{ indic } {};
	virtual ~IStatistics() = default;
	virtual double get_indicator()const = 0;
	virtual std::string get_name_indicator()const = 0;

protected:
	std::list<long long> *indicators;
};

