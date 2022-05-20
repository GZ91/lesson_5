#include <iostream>
#include <string>
#include "Perfromance_testing.h"
#include "Util.h"




void method_test() 
{
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello Georgiy" << std::endl;
}



int main()
{
    std::list<long long> result;
    Perfromance_testing* per_test = new Perfromance_testing(method_test);
    result = per_test->go_testing(1000);
    Util* app = new Util(result, std::cout);
    app->print_statistics();
    delete app, per_test;
}
