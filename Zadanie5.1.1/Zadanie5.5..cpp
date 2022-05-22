// Zad5.5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
//rysowanie trojkata prostokatnego
void drawFigureA(int l)
{
    for (int i = 0; i < l; i++) //przechodzenie po wierszach
    {
        //rysowanie w danym wierszu
        for (int j = 0; j <= i; j++) // licz wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
        {
            std::cout << '*'; //rysujemy pojedyncza gwiazdke
        }
        std::cout << std::endl; //po narysowaniu w danej linii/wierszu przechodzimy do nastepnego wiersza
    }
}
//rysowanie przekatnej
void drawFigureB(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < i; j++) // liczba wykonan petli zagniezdzonej jest zalezna od aktualnej wartosci i
        {
            std::cout << ' ';
        }
        std::cout << "*" << std::endl;
    }
}
//rysowanie przekatnej v.2
void drawFigureBv2(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (j < i)
            {
                std::cout << ' ';
            }
            else if (i == j)
            {
                std::cout << '*';
            }
            else
            {
                continue;
            }
        }
        std::cout << std::endl;
    }
}
//rysowanie przekatnej v.3
void drawFigureBv3(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                std::cout << '*';
            }
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}
//rysowanie kwadratu
void drawFigureC(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            //rysujemy gwiazdki w pierwszym i ostatnim wierszu oraz w pierwszej i ostatniej kolumnie
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
//rysowanie X
void drawFigureD(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (j == i || j == h - i - 1) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}
int main()
{
    drawFigureA(10);
    drawFigureB(10);
    drawFigureBv2(10);
    drawFigureBv3(10);
    drawFigureC(10);
    drawFigureD(9);
}
