#include "Functions.h"
#include <iostream>
#include <math.h>


void printDoubleNumber(double d) //123.
{
    if (d < 0.0)
    {
        std::cout << '-';
        d *= -1.0; //przemnażamy razy -1 zeby miec wartosc dodatnia
    }
    int a = static_cast<int>(d); // część całkowita jest wyciągnięta z double
    //.456
    double b = d - a; // część po przecinku/ kropce
    int n1 = 1; //liczba cyfr części calkowitej
    int n2 = 1; //liczba cyfr czesci po przecinku
    //123

    while (a > 9) // zliczamy ile jest cyfr w czesci calkowitej, robimy to bo nie jestesmy w stanie je wyswietlic od lewej
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int> (d); // odświeżamy tą wartość

    //.456 *10 = 4.56 ->
    //(4.56-4) *10 = 4.6 -> 5

    for (int i = 0; i < n1; i++)
    {
        //tutaj wyciągamy kolejne cyfry z czesci calkowitej oczywiscie od lewej do prawej
        //123
        //123/100 -> 1
        //23/10 -> 2
        //3/1 -> 3
        int p = static_cast<int>(pow(10, n1 - i - 1)); //rzutujemy bo pow zwraca double
        int c = a / p;
        a -= c * b;
        std::cout << c;
    }
    std::cout << '.';

    do
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << c;
        b -= c;

    } while (b > 0.0);
}