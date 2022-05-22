#include "Functions.h"
#include <iostream>

int main()
{
    //int power
    //pamietamy zeby rzetelnie testowac to co napisalismy
    std::cout << power(3, -1) << std::endl;
    std::cout << power(3, 0) << std::endl;
    std::cout << power(3, 1) << std::endl;
    std::cout << power(3, 2) << std::endl;
    std::cout << power(3, 4) << std::endl;

    //float power
    std::cout << power(3.50f, -1.0f) << std::endl;
    std::cout << power(3.50f, 0.0f) << std::endl;
    std::cout << power(3.50f, 1.0f) << std::endl;
    std::cout << power(3.50f, 2.0f) << std::endl;
    std::cout << power(3.50f, 4.0f) << std::endl;

    //double power
    std::cout << power(3.48, -1.0) << std::endl;
    std::cout << power(3.65, 0.0) << std::endl;
    std::cout << power(3.54, 1.0) << std::endl;
    std::cout << power(3.13, 2.0) << std::endl;
    std::cout << power(3.7, 4.0) << std::endl;

}


