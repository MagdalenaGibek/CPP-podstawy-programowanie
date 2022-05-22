

#include <iostream>
#include <time.h>

int main()
{
    int czas = time(NULL);
    srand(czas); //ziarno funkacja zmienia ziarno losowania
    rand();

    int i = 0;
    float number = 0.0f;
    do
    {
        double liczba = 5.0 * rand() / (RAND_MAX * 1.0);
        int liczba2 = rand();
        int liczba3 = rand();
        number = liczba;
        std::cout << number << std::endl;
        std::cout << ++i << std::endl;

    } while (number >= 0.03);
}

/// MOJA IMPLEMENTACJA RAND

int poprzednia_liczba = 1;

void my_srand(int seed)
{
    poprzednia_liczba = seed;
}

int my_rand()
{
    int nastepna_liczba = (124563 * poprzednia_liczba + 243201) % 32767;
    return nastepna_liczba;
}
