// Zadanie5.1.cpp : Dla 20-to elementowej tablicy losowych liczb całkowitych (zakres 1-10), wypisz:
//a) Wszystkie od początku;
//b) Wszystkie od końca;
//c) Wszystkie na nieparzystych pozycjach;
//d) Co 3 liczbę;
//e) Sumę wszystkich;
//f) Sumę ostatnich 5 większych od 3;
//g) Ilość liczb z początku tablicy których suma przekracza 10;
//h) Co n - tą liczbę;
//i) Podzielne przez m;
//j)* Które liczby iterując od początku tablicy dadzą sumę równą 10 ? Wypisz te liczby i ich
//indeksy.Czy możliwe są różne kombinacje ? .
//

#include <iostream>
#include "Zad5_1solution.h"

int main()
{
    const int n = 20;
    int num[n] = {};
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        num[i] = (rand() % 10 + 1);
        std::cout << num[i] << ';';
    }
    std::cout << std::endl;
    
    //taskA(num, n);
    //taskB(num, n);
    //taskC(num, n);
    //taskD(num, n);
    //taskE(num, n);
    //taskF(num, n);
    //taskG(num, n);

    int l = 5;
    taskH(num, n, l);
    int m = 5;
    taskI(num, n, m);
    taskJ(num, n);

  



}



