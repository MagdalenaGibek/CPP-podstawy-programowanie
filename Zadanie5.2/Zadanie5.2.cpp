// Zadanie5.2.cpp : Utwórz tablicę dwuwymiarową 10x10 typu double, a następnie:
//a) Wypełnij ją wartościami od 1.0 do 100.0;
//b) Wypełnij ją losowymi wartościami;
//c) Wypełnij ją losowymi wartościami z przedziału - 1.5 do 3.5;
//d) Wypełnij ją w taki sposób, ażeby każdy element tej tablicy stanowił
//sumę numeru wiersza i numeru kolumny, w których się znajduje,
//podzielony przez 100;

#include <iostream>

void fillArrayfrom1to100(float arr[]; int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {

            arr[i][j] = n++;
            std::cout << arr[i][j] << ';';
        }
    }
}
void fillArrayRandomly(float arr[]; int size)
{
    for (int i = 0; i < size, ++i)
    {
        for (int j = 0; ++i)
        {
            tab[i][j] = tab[i] = (rand() % 10 + 1);
        }
}

int main()
{
    const int size = 10;
    double tab[size][size] = {};
    double n = 1;
    

    srand(time(NULL));
    

        
}

