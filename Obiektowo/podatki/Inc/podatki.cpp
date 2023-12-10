#include <iostream>
#include <cmath>
#include <limits>
#include "Podatki.h"

Podatki::Podatki(float zar){

    zarobki = zar;
};

float Podatki::ask_for_zarobki(){

    std::cout<<"Ile zarabiasz?: ";

    while (!(std::cin >> zarobki) || zarobki <= 0)
    {
        std::cout << "dane nieprawidlowe" << std::endl;
        std::cout << "Podaj ponownie swoje zarobki: ";

        // Czyszczenie bufora
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };

    return zarobki;
}

float Podatki::oblicz_pod(float zar){

    float wynik;

    if (zar < 2789.89)
    {
        wynik = 0;
    }
    else if (zar >= 2789.89 && zar < 37024)
    {
        wynik = ceil((zar * 0.19 - 530.08) * 100) / 100;
    }
    else if (zar >= 37024 && zar < 74048)
    {
        wynik = ceil(6504.48 + ((zar - 37024) * 0.3) * 100) / 100;
    }
    else if (zar >= 74048)
    {
        wynik = ceil(17611.68 + ((zar - 74048) * 0.4) * 100) / 100;
    }

    return wynik;
};

float Podatki::oblicz_podatek(){

    return oblicz_pod(zarobki);
};