// Zadanie2.2.cpp : Utwórz 3 zmienne typu int, a następnie przypisz im wartości wylosowane z zakresu 1 - 10..
//

#include <iostream>
int random1To10() {
    return rand() % 10 + 1; //obliczamy reszte z dzielenia i mamy zakres 0-9 potem dodajemy 1
}
int main()
{
    //funkcja rand() generuje liczby pseudolosowe (czyli przy uruchamianiu programu beda za kazdym razem takie same,
    // ale kolejne liczby w trakcie dzialania programu sa juz inne)
    //funkcja rand() losuje wartosci w zakresie 0 do RAND_MAX (standardowo 32767)
    //zeby przy kazdorazowym uruchomieniu programy liczby generowane przez rand() byly inne uzywa sie srand()
    //srand zmienia pozycje ziarna losowania (random seed)
    int a1 = random1To10();
    int a2 = random1To10();
    int a3 = random1To10();
    std::cout << a1 << "\n";
    std::cout << a2 << "\n";
    std::cout << a3 << "\n";
}