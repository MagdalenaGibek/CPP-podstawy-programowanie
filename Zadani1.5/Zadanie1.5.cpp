// Zad1.5.cpp :Napisz funkcję sprawdzającą czy podane ciągi znaków są palindromem.
// Na ekranie wyświetl odpowiedź.
// 
//  Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <string>
   
bool czyJestPalindrom(std::string str)
{
    int dl = str.size(); //zwrocenie dlugosci - to samo co length
    for (int i = 0; i < dl / 2; i++) //przechodzimy po kolejnych literach stringa od poczatku do polowy
    {
        //if (str.at(i) != str.at(dl - i - 1)) //metoda .at() to samo co []; sprawdzamy czy litery sa rozne
        if (str[i] != str[dl - i - 1])
        { //jesli w ktoryms momencie litery sa rozne -> to nie jest palindrom i zwracamy false
            return false;
            //std::cout << "zaraz bedzie break" << std::endl;
            //break;
        }
    }
    //jezeli caly for wykonal sie poprawnie (czyli wszystkie pary liter byly takie same) -> to jest palindrom
    return true;
}
int main()
{
    std::cout << czyJestPalindrom("KAJAK") << std::endl;
    std::cout << czyJestPalindrom("ANNA") << std::endl;
    std::cout << czyJestPalindrom("KAJA") << std::endl;
}
