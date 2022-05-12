

#include <iostream>

int main()
{
    int l = 0;
    std::cout << "Podaj liczbę:";
    std::cin >> l;

    if ((l % 2)) // kiedy w warunku otrzymamy 0 oznacza to false, gdy 1 oznacza to true
    {
        std::cout << "Liczba jest nieparzysta" <<std::endl; // if trafi tutaj gdy reszta z dzielenia 1 - to jest liczba nieparzysta
    }
    else
    {
        std::cout << "Liczba jest parzysta" << std::endl; // analogicznie gdy reszta równa się 0
    }
}

