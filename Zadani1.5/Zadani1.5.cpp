
bool czyPalindrom(std::string str)
{
    int dl = str.size(); //zwracanie długości - to samo co length

    for (int i = 0; i < dl / 2; i++) //przechodzimy po kolejnych literach od początku do połowy
    {
        if (str.at(i) !== str.at(dl - i - 1)) //metoda .at() to samo co {}; sprawdzamy czy litery są różne 
        {//jeśli w którymś momencie litery są różne -> to nie jest palindrom i zwracamy false
            return 0;
          
        }
    }
    // jeśzeli cały for wykonał się poprawnie (czyli wszystkie pary liter były takie same)  -> to jest palindrom
    return 1;

}

#include <iostream>
#include <string>

int main()
{
    std::string tekst = {};
    std::cout << "Podaj tekst: ";
    std::cin >> tekst;

    std::cout << czyPalindrom(tekst);

}

