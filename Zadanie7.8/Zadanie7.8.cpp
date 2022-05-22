// Zadanie7.8.cpp : Napisz program rozkładający daną liczbę naturalną na czynniki pierwsze w następujący sposób.
// Sprawdzamy, czy liczba dzieli się przez 2. Jeżeli tak, to stwierdzamy, że dwójka występuje w jej rozkładzie
// na czynniki pierwsze, a samą liczbę dzielimy przez 2. Czynność tę powtarzamy, aż liczba przestanie być podzielna przez 2.
// Następnie powtarzamy tę samą procedurę badając podzielność przez 3, 4, itd., aż rozważana liczba stanie się równa 1.

#include <iostream>

int main()
{
    int n = 0;
    int temp = 0;
    std::cout << "Podaj liczbę: "<<std::endl;
    std::cin >> n;

    if (n % 2 == 0)
    {
        for (int i = 2; i / i <= 1; ++i)
        {
            temp = n;
            while (n > 0)
            {
                n /= i;
            }
            n = temp;
        }
    }
}


