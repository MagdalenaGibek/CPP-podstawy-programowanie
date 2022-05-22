// Zadanie7.5.cpp : Wykonaj proste szyfrowanie (przesunięcie o 20). Stwórz funkcję do szyfrowania oraz deszyfrowania Stringów.
//

#include <iostream>

std::string enctryptedStr(std::string str)
{
    std::string str2;
    for (int i = 0; i < str.size(); ++i)
    {
        str2+=str[i] - 20;
    }
    return str2;
}
std::string denctryptedStr(std::string str)
{
    std::string str2;
    for (int i = 0; i < str.size(); ++i)
    {
        str2 += str[i] + 20;
    }
    return str2;
}

int main()
{
    std::string str;
    std::cout << "Wprwadź słowo do zaszyfrowania\n";
    std::cin >> str;
    std::string amendedStr = enctryptedStr(str);
    std::cout << "Zaszyfrowany: " << enctryptedStr(str)<<std::endl;
    std::cout << "Oaszyfrowany: " << denctryptedStr(amendedStr);
}


