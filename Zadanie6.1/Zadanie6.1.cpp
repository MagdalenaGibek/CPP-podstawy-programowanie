// Zadanie6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void transpose3x3Array(int tab[][3])
{
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = tab[j][i];//zamieniamy wiersze z kolumnami
            std::cout << res[i][j] << "; ";
        }
        std::cout << '\n';
    }
}
int main(int argc, char* argv[])
{
    //argc zawsze będzie mieć wartość >=1 bo jako pierwszy argument podawana jest nazwa programu !!!
    std::cout << "You have entered " << argc
        << " arguments: " "\n";

    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << "\n";
    }
}
