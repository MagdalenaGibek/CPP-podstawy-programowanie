// Zad4.2.cpp : Napisz funkcję, która będzie składać tablicę typu char w Stringa (wiersz po wierszu).
//
#include <iostream>
#include <string>
std::string convert1DCharArrayToString(char cTab[], int a)
{
    std::string str;
    for (int i = 0; i < a; i++)
    {
        str += cTab[i];
    }
    str += '\n';
    return str;
}
//gdy przekazujemy tablice dwuwymiarowa musimy podac drugi wymiar
std::string convert2DCharArrayToString(char cTab[][7], int a, int b)
{
    std::string str;
    for (int i = 0; i < a; i++) //tutaj przechodzimy po wierszach
    {
        for (int j = 0; j < b; j++) //tutaj przechodzimy po kolejnych znakach w wierszu
        {
            //std::cout << cTab[i][j];
            str += cTab[i][j];
        }
        str += '\n';
    }
    return str;
}
int main()
{
    char cTab1D[10] = "123456789";
    char cTab[4][7] = { "abcdef", "asdfef", "qwrtef", "pouyef" };
    std::cout << convert1DCharArrayToString(cTab1D, 10);
    std::cout << convert2DCharArrayToString(cTab, 4, 7);
}

