// Zadanie5.3.cpp : 
#include <iostream>

void transposeArray(int arr[][3])
{
    int result[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = arr[j][i];
            std::cout << result[i][j] << std::endl;
        }
        std::cout << '\n';
    }

}

int main()
{
    int tab[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    transposeArray(tab);
}


