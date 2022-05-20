#include <iostream>
#include <string>
#include <fstream>
#include "Util.h"
#include "Testing.h"


int main()
{
    std::fstream file;
    file.open("file.txt", std::ios::out);
    std::list<long long> result;
    for (int i = 0; i <= 10; i++)result.push_back(i);
    Util* app = new Util(result, file);
    app->print_statistics();
    delete app;
    file.close();

    if (testing::eq_file("file.txt", "benchmark.txt"))
    {
        std::cout << "Successfully" << std::endl;
    }
    else
    {
        std::cout << "Fail!!!" << std::endl;
        return 1;
    }    
}