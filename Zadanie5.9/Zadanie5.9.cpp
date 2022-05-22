// Zad. 5.9 Napisz funkcję, która dla tablic dwuwymiarowych typu char, będzie odwracać ich kolejność(element[0, 0]
// zamienia się z elementem ostatnim, element[0, 1] zamienia się z przedostatnim itd.)

#include <iostream>

void revertTab(char tab[][5])
{
    char result[5][5];
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            result[i][j] = tab[5 - i - 1][5 - j - 1];
            std::cout << result[i][j];
        }
        std::cout << std::endl;
    }
}


int main()
{

    const int size = 5;
    char tab[size][size] = { {'a','b','c','d','e'}, 
        {'f','g','h','i','j'}, 
        {'k','l','m','n','o'}, 
        {'p','r','s','t','u'}, 
        {'w','y','q','v','z'} };

    revertTab(tab);
}

