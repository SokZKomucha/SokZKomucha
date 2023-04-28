#include "my_library.h"
#include <iostream>

int main() 
{
    std::string greeting = sayHello();
    std::cout << greeting << std::endl;
    return 0;
}