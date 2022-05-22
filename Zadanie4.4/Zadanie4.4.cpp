// Zad4.4.cpp : Sprawdź czy słowo ma więcej niż 5 liter i kończy się literą „r”. (napisz funkcję)
//
#include <iostream>
#include <string>
bool checkWord(std::string word)
{
    char lastChar = '0';
    lastChar = word.back();
    if (word.size() > 5)
    {
        if (lastChar == 'r')
        {
            return 1;
        }
        else
        {
            std::cout << "nie konczy sie na r" << std::endl;
            return 0;
        }
    }
    std::cout << "za malo liter" << std::endl;
    return 0;
}
int main()
{
    std::cout << checkWord("kurs") << std::endl;
    std::cout << checkWord("kursaa") << std::endl;
    std::cout << checkWord("kursr") << std::endl;
    std::cout << checkWord("kursrr");
}

