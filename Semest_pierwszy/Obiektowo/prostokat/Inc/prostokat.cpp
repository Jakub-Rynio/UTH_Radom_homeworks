#include "Prostokat.h"
#include <iostream>
#include <limits>

Prostokat::Prostokat(float a, float b)
{

    bok_a = a;
    bok_b = b;
};

float Prostokat::ask_for_a_b()
{

    std::cout << "Podaj bok a: ";

    while (!(std::cin >> bok_a) || bok_a <= 0)
    {
        std::cout << "dane nieprawidlowe" << std::endl;
        std::cout << "Podaj ponownie bok a: ";

        // Czyszczenie bufora
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };

    std::cout << "Podaj bok b: ";

    while (!(std::cin >> bok_b) || bok_b <= 0)
    {
        std::cout << "dane nieprawidlowe" << std::endl;
        std::cout << "Podaj ponownie bok b: ";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };

    return bok_a, bok_b;
};

float Prostokat::obw(float a, float b)
{
    float wynik;
    wynik = 2 * a + 2 * b;
    return wynik;
};

float Prostokat::oblicz_obw()
{
    return obw(bok_a, bok_b);
};

float Prostokat::pole(float a, float b)
{
    float wynik;
    wynik = a * b;
    return wynik;
};

float Prostokat::oblicz_pole()
{
    return pole(bok_a, bok_b);
};
