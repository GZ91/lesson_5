#include "Util.h"

Util::Util(std::list<long long>& list_value, std::ostream &output):output{output}
{
    list_statistic.push_back(new Min_statistics(&list_value));
    list_statistic.push_back(new Max_statistics(&list_value));
    list_statistic.push_back(new Mean_statistics(&list_value));
    list_statistic.push_back(new Std_statistics(&list_value));
    list_statistic.push_back(new Pct_statistics(&list_value, 90));
    list_statistic.push_back(new Pct_statistics(&list_value, 95));
}

void Util::print_statistics()
{
    output << "-----------result statistics-----------" << std::endl;
    for (auto iter = list_statistic.begin(); iter != list_statistic.end(); iter++)
    {
        output << (*iter)->get_name_indicator() << std::setprecision(8) << (*iter)->get_indicator() << std::endl;
    }
}

Util::~Util()
{
    for (auto iter = list_statistic.begin(); iter != list_statistic.end(); iter++)
    {
        delete (*iter);
    }
}