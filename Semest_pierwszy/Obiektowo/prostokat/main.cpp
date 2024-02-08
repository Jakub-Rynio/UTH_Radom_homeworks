#include <iostream>
#include "Inc/Prostokat.h"

int main()
{

    Prostokat p1;

    std::cout << "Podaj dane pierwszego prostokata: " << std::endl;
    p1.ask_for_a_b();
    std::cout << "Prostokat o boku a = " << p1.bok_a << " i boku b = " << p1.bok_b << std::endl;
    std::cout << "Ma Obw = " << p1.oblicz_obw() << std::endl;
    std::cout << "Ma pole = " << p1.oblicz_pole() << std::endl;

    // I dzieki temu ze to jest napisane obiektowo moge tak

    std::cout << "Podaj dane drugiego prostokata" << std::endl;

    Prostokat p2;

    p2.ask_for_a_b();
    if (p1.oblicz_obw() < p2.oblicz_obw())
    {
        std::cout << "Obw pierwszego prostokata jest mniejszy";
    }
    else
    {
        std::cout << "Obw pierwszego drugiego jest mniejszy";
    }

    return 0;
}
