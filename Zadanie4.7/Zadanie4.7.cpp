// Zadanie4.7.cpp : Napisz funkcję, która będzie zamieniać znaki od 3 do 6 w Stringu na „abcd”.
//
#include <iostream>
#include <string>
std::string performReplaceInString(std::string str)
{
    if (str.size() >= 6)
        //replace(poczatek, dlugosc, tekst)
        return str.replace(2, 4, "abcd");
    else
        return "Ciąg jest zbyt mały";
}
int main()
{
    std::cout << performReplaceInString("qwert");
}
