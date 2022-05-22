

#include <iostream>

void revertCharArrayv2(char tab[][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::swap(tab[i][j], tab[3 - i - 1][3 - j - i]);
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << tab[i][j];
        }
        std::cout << std::endl;
    }

}
int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };

   
    revertCharArrayv2(tab);

}
//void drawA(int l = 6)
//{
//    for (int i = 0; i < l; ++i)
//    {
//        for (int j = 0; j <= i; ++j)
//        {
//            std::cout << '*';
//        }
//        std::cout << std::endl;
//    }
//}
//void drawB(int l = 6)
//{
//    for (int i = 0; i < l; ++i)
//    {
//        for (int j = 0; j < l; ++j)
//        {
//            if (j == i)
//            {
//                std::cout << '*';
//            }
//            else
//            {
//                std::cout << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//}
//void drawC(int l = 6)
//{
//    for (int i = 0; i < l; ++i)
//    {
//        for (int j = 0; j < l; ++j)
//        {
//            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
//            {
//                std::cout << '*';
//            }
//            else
//            {
//                std::cout << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//}
//void drawD(int l = 6)
//{
//    for (int i = 0; i < l; ++i)
//    {
//        for (int j = 0; j < l; ++j)
//        {
//            if (j == i || j == l - i - 1)
//            {
//                std::cout << '*';
//            }
//            else
//            {
//                std::cout << ' ';
//            }
//        }
//        std::cout << std::endl;
//    }
//}
//int main()
//{
//    drawA(6);
//    drawB(6);
//    drawC(6);
//    drawD(6);
//}


