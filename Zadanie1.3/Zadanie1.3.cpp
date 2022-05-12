

#include <iostream>

int main()
{
    int l = 0;
    std::cout << "Podaj liczbę:"<< std::endl;
    std::cin >> l;
    if (l < 0)
    {
        std::cout << "Liczba jest mniejsza od 0.";
    }
    else if (l > 0)
    {
        std::cout << "Liczba jest większa od 0.";
    }
    else
    {
        std::cout << "Liczba jest równa 0.";
    }
}

