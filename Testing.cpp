#include "Testing.h"

namespace testing
{
    bool eq_file(std::string name1, std::string name2)
    {
        std::fstream file1;
        file1.open(name1, std::ios::in);

        std::fstream file2;
        file2.open(name2, std::ios::in);

        if (file1 && file2)
        {
            char ch1, ch2;
            bool result = true;
            while (file1.get(ch1) && file2.get(ch2))
            {
                if (ch1 != ch2)
                {
                    return false;
                }
            }
        }
        else
            return false;
        return true;

    }
}