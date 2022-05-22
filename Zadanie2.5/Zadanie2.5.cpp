

#include <iostream>
#include<iomanip>

int main()
{
    long double number = 0;
    int n = 0;
    std::cout << "Podaj liczbę zmiennoprzecinkową: " << std::endl;
    std::cin >> number;
    std::cout << "Podaj liczbę miejsc po przecinku: " << std::endl;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(n) << number;


    int decPlaces = pow(10, n);
    number *= decPlaces;
    number = round(number);
    number /= decPlaces;


}

