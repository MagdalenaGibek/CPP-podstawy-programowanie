
// Zad4.8.cpp : Napisz funkcję, która będzie zamieniać ostatni znak z pierwszym w Stringu.
#include <iostream>
#include <string>
std::string swapFirstWithLastChar(std::string str)
{
    std::swap(str.front(), str.back());
    return str;
}
std::string swapFirstWithLastChar2(std::string str)
{
    char c = str.back(); //zapamietujemy na chwile ostatni znak zanim go nadpiszemy
    str.back() = str.front();
    str.front() = c;
    return str;
}
int main()
{
    std::cout << swapFirstWithLastChar("Hello World!\n");
    std::cout << swapFirstWithLastChar2("Hello World!\n");
}


