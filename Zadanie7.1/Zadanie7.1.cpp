// Zadanie7.1.Napisz funkcję do obliczania najmniejszej wspólnej wielokrotności.

//

#include <iostream>

int nwd(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else if ()
    //while (b != 0)
    //{
    //    int temp = b;
    //    b = a % b;
    //    a = temp;
    //}
    //return a;
}
int nww(int a, int b)
{
    int result = (a * b) / nwd(a, b);
    return result;
}

int main()
{
    int nwd = 1;
 /*   równe
        mniejsza przez większą*/
    //większa przez mniejszą, if a=b , to 
    // pętla do mniejszej
    //pętla do połowy liczby mniejszej
    // mniejsza /2
    int a = 0;
    int b = 0;

    std::cout << "Podaj liczbę a: " << std::endl;
    std::cin >> a;
    std::cout << "Podaj liczbę b: " << std::endl;
    std::cin >> b;

    std::cout << "Najmniejsza wspólna wielokrotniość liczby " << a << " i " << b << " wynosi: " << nww(a, b);
}


