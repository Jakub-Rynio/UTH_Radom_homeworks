// Pobieranie deklaracji tak jak  w main
//g++ main.cpp Inc/Wiek.cpp aby skompilowac
#include "Wiek.h"

#include <iostream>
// tutaj rozwijamy nasza klase 

    int wiek;

//Konstruktor tylko po to aby jakims cudem nie wywolaly sie fuckcje(metody) bez dostarczenie do nich zmiennych 
    Wiek::Wiek(int x){
        wiek = x;
    };
// Pobiera wiek i sprawdza czy jest ok 
    int Wiek::get_wiek(){
        std::cout<<"podaj wiek: ";
        if (!(std::cin >> wiek ) || wiek < 0){
            
            // To poprostu przerywa program jesli dane nieprawidlowe takie (return 0 w main)
            throw std::runtime_error("Dane nieprawidlowe");

        }else return wiek;
    };

//oblicza w osobnej fuckji, bo czemu nie? Skompilujmy to jezcze bardziej niech nikt tego nie zrozumie ;-)
    int Wiek::oblicz(int podaj_wiek){
        return podaj_wiek + 25;
    };

    void Wiek::show(){
        std::cout << "Twoj wiek za 25 lat to: " << oblicz(wiek);
    }


    void Wiek::the_register(){
        get_wiek();
        show();
    };
