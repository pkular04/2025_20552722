#include <iostream>
#include "adder.h"

int main()
{
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Sum = " << add(a, b) << std::endl;
    return 0;
}

