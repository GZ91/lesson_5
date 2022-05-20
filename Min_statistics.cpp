#include "Min_statistics.h"


double Min_statistics::get_indicator() const{
    if (indicators->size() == 0) return -1.0;
    auto iter = indicators->begin();
    double min = (double)(*iter);
    for (; iter != indicators->end(); iter++)
    {
        if ((*iter) < min) min = (double)(*iter);
    }
    return min;
}

std::string Min_statistics::get_name_indicator() const
{
    return "Min:";
}