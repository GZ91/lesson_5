#include "Max_statistics.h"

double Max_statistics::get_indicator() const 
{
    if (indicators->size() == 0) return -1.0;
    auto iter = indicators->begin();
    double max = (double)(*iter);
    for (; iter != indicators->end(); iter++)
    {
        if ((*iter) > max) max = (double)(*iter);
    }
    return max;
}

std::string Max_statistics::get_name_indicator() const
{
    return "Max:";
}