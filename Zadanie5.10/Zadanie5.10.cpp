// Zadanie5.10.cpp : Napisz funkcję, która dodaje dwie macierze (takiej samej wielkości), nic nie zwraca,
// a wynik pokazuje na ekranie.

#include <iostream>
#include <iomanip>
void addArrays(int tab1[][5], int tab2[][5])
{
    for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                std::cout<<std::setfill(' ') << std::setw(5);
                std::cout << tab1[i][j]+ tab2[i][j];
            }
        std::cout << std::endl;
    }
    
}

int main()
{
    int tab1[5][5] = { {2, 4, 5, 10, 8},
        {12, 2, 3, 18, 15},
        {1, 4, 6, 10, 12},
        {6, 2, 3, 15, 5},
        {9, 5, 7, 43, 73} };

    int tab2[5][5] = { {12, 4, 7, 2, 15},
        {8, 2, 5, 23, 64},
        {1, 5, 3, 7, 64},
        {3, 34, 7, 18, 6},
        {54, 2, 7, 18, 12} };

    addArrays(tab1, tab2);

}


