// Zadanie7.2.Napisz funkcję do zamiany liczby dziesiętnej na liczbę szesnastkową.
//

#include <iostream>

std::string hex(int num)

{
    const int size = 16;
    char hexSystem[size] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    std::string reverHexNum;
    std::string hexNum;

    while (num)
    {
        reverHexNum += hexSystem[num %size];
        num /= size;
    }
    for (int i = reverHexNum.size(); i >=0; --i)
    {
        hexNum += reverHexNum[i];
    }
    return hexNum;
}

int main()
{
    int num = 0;
    std::cout << "Podaj liczbę jaką chce przekonwertować: \n";
    std::cin >> num;

    std::cout << "W systemie 16-tkowym " << num << " wynosi " << hex(num);

}


