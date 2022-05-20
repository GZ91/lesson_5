#include "Perfromance_testing.h"


std::list<long long> Perfromance_testing::go_testing(int count_repeat)
{
	std::list<long long> return_list;
	for (int i = 0; i < count_repeat; i++) 
	{
		auto startTime = std::chrono::system_clock::now();
		ref_method();
		auto endTime = std::chrono::system_clock::now();
		auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
		return_list.push_back(microseconds);
	}
	return return_list;
}