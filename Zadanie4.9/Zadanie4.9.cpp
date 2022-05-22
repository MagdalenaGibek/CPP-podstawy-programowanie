// Zadanie4.9.cpp : Napisz funkcję, która będzie przyjmować tablicę stringów, oraz zwracać pojedynczy string(po scaleniu).


#include <iostream>
#include "Functions.h"

std::string concatenateStrings(std::string s[], const int len, char c = '\n')
{
    // metoda size() lub length() odnosi się do klasy string i jest uzywana na obiektach tej klasy
    // ta metoda zwraca dlugosc stringa, a nie wielkosc tablicy typu string
    // w zwiazku z powyzszym nie ma ona wplywu na tablice klasy string
    // 
    // metoda size nie działa na tablicy typu string
    // std::cout << s[0].size() << std::endl --> moetoda size działa na obiekcie typu string
    // std::cout << s[0][0]  --> w taki sposób odnosimy się do konkretnego chara z danego stringa 


    std::string str;

    for (int i = 0; i < len; ++i)
    {
        str += s[i];
        str += c;
    }
    return str;
}


int main()
{
    std::string s[3] = { "abc", "cda", "efd" };
    std::cout << sizeof(s) << std::endl; // metoda sizeof zwraca ilosc pamietaci zajetej przez dany typ/obiekt
    std::cout << sizeof(s[0]) << std::endl; //metoda sizeof zwraca ilosc pamieci zajetej przez dany typ/obiekt
    const int len = 5;
    std::string s[len] = { "Ala", "ma", "kota", "ha", "ha"};
    char c = ' ';
    std::cout << concatenateStrings(s, len, c);
}


