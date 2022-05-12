

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    std::cout << "Podaj pierwszą liczbę: "<<std::endl;
    std::cin >> a;
    std::cout << "Podaj drugą liczbę: " << std::endl;
    std::cin >> b;
    std::cout << "Podaj trzecią liczbę: " << std::endl;
    std::cin >> c;

    if ((a > b) && (a >c))
    {
        std::cout<< "Pierwsza libcza jest największa " << a;
    }
    else if ((b > a) && (b > c))
    {
        std::cout << "Pierwsza libcza jest największa " << b;
    }
    else
    {
        std::cout << "Trzecia libcza jest największa " << b;
    }
}

