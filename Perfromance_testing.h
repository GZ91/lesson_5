#pragma once
#include <chrono>
#include <list>
class Perfromance_testing
{
public:
	Perfromance_testing(void(*ref)()) :ref_method{ref} {};
	std::list<long long> go_testing(int count_repeat);

private:
	void(*ref_method)();
};


