#include "Zad5_1solution.h"
#include <iostream>

void taskA(int num[], int n)
{
    std::cout << "A: " << std::endl;

    for (int i = 0; i < n; ++i)
    {
        std::cout << num[i];
        std::cout << ';';
    }
    std::cout << std::endl;
}
void taskB(int num[], int n)
{
    std::cout << "B: " << std::endl;
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << num[i];
        std::cout << ';';
    }
    std::cout << std::endl;
}
void taskC(int num[], int n)
{
    std::cout << "C: " << std::endl;
    for (int i = 0; i < n; i+=2)
    {
        std::cout << num[i];
        std::cout << ",";
    }
    std::cout << std::endl;
}
void taskD(int num[], int n)
{
    std::cout << "D: " << std::endl;
    for (int i = 0; i < n; i += 3)
    {
        std::cout << num[i];
        std::cout << ",";
    }
    std::cout << std::endl;
}
void taskE(int num[], int n)
{
    std::cout << "E: " << std::endl;

    int sum1 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum1 += num[i];
    }
    std::cout << sum1 << std::endl;
}
void taskF(int num[], int n)
{
    std::cout << "F: " << std::endl;
    int sum = 0;
    for (int i = n-5; i < n; ++i)
    {
        if (num[i] > 3)
        {
            sum += num[i];
        }
    }
    std::cout << sum << std::endl;
}
void taskG(int num[], int n)
{
    std::cout << "G: " << std::endl;
    int sum = 0;
    int i = 0;
    for (i = 0; i < n; ++i)
    {
        sum += num[i];
        if (sum > 10)
        {
            break;
        }
    }
    std::cout << i+1 << ';' << std::endl;
}
void taskH(int num[], int n, int l)
{
    std::cout << "H: " << std::endl;
    for (int i = 0; i < n; i += l)
    {
        std::cout << num[i];
        std::cout << ';';
    }
    std::cout << std::endl<< std::endl;
}
void taskI(int num[], int n, int m)
{
    std::cout << "I: " << std::endl;
    for (int i = 0; i < n; ++i)
    {
        if (num[i] % m == 0)
        {
            std::cout << num[i] << ';';
        }
    }
    std::cout << std::endl << std::endl;
}
void taskJ(int num[], int n)
{
    std::cout << "J: " << std::endl;

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i;
        while (sum < 10 && j < n)
        {
            sum += num[j];
            ++j;
        }

        if (sum == 10)
        {
            for (int k = i; k < j; ++k)
            {
                std::cout << num[k] << " indeks nr: " << k << std::endl;
            }
            std::cout << std::endl;
        }

        sum = 0;
    }
}




