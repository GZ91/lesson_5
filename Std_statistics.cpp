#include "Std_statistics.h"


double Std_statistics::get_indicator() const {
    if (indicators->size() == 0) return -1.0;
    long long sum = 0;
    for (auto iter = indicators->begin(); iter != indicators->end(); iter++)
    {
        sum += (*iter);
    }
    double mean = (double)(sum / indicators->size());
    sum = 0;
    for (auto iter = indicators->begin(); iter != indicators->end(); iter++)
    {
        sum += std::pow((double)(*iter)-mean, 2);
    }
    double val = (long double)(sum / indicators->size());
    return (double)((int)(std::sqrt(val) * 1000000)) / 1000000;
}

std::string Std_statistics::get_name_indicator() const
{
    return "Std:";
}