#include "Pct_statistics.h"


double Pct_statistics::get_indicator() const
{
    int size_list = indicators->size();
    if (size_list == 0) return -1.0;
    std::list <long long> indicators_local{ *indicators };
    indicators_local.sort();
    double val_index_pct = (double)val_pct * (double)size_list / 100.0;
    int    index_pct = std::ceil(val_index_pct)-1;
    auto iter = indicators_local.begin();
    std::advance(iter, index_pct);
    return *iter;
}

std::string Pct_statistics::get_name_indicator() const
{
    return "Pct" + std::to_string(val_pct) + ":";
}