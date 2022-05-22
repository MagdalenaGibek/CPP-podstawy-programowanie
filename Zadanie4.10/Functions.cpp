#include <iostream>

void splitedString(std::string str, char c = '/n')
{
    std::string str2;
    for (int i = 0; i < str.size(); ++i)
    {
        str2 += str[i];
        str2 += c;
    }
    std::cout << str2;
}