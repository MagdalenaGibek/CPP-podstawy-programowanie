// Zadanie5.12.cpp : Stwórz program, który poprosi użytkownika o podanie wartości iczbowej.
//Następnie sprawdzi, która potęga liczby 3 jest większa od zadanej wartości.Np.jeśli użytkownik podał 75, to odpowiedzią będzie
// 4, bo 3 do czwartej potęgi jest równe 81 i to pierwsza potęga liczby 3 większa od 75.

#include <iostream>

int main()
{
    double num = 0;
    int i = 0;
    std::cout << "Podaj liczbę: " << std::endl;
    std::cin >> num;

    while (static_cast<int>(num) / 3 != 0)
    {
        num /= 3;
        ++i;
    }
    int power = i + 1;

    std::cout << power << " jest potęgą większą od zadanej wartości";
}

