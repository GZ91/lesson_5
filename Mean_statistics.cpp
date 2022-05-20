#include "Mean_statistics.h"

double Mean_statistics::get_indicator() const {
    if (indicators->size() == 0) return -1.0;
    long long sum = 0;
    for (auto iter = indicators->begin(); iter != indicators->end(); iter++)
    {
        sum +=(*iter);
    }
    return (double)(sum/ indicators->size());
}

std::string Mean_statistics::get_name_indicator() const
{
    return "Mean:";
}