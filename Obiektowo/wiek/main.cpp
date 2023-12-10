/*
Autor: Jakub Rynio
Opis: Najbardziej skomplikowany program dodajacy 2 liczby XD
W razie pytan lub uwag pisz do mnie na mesanger lub mail - RynioJakub@proton.me
*/
#include <iostream>

//sciezka do pliku z deklaracja klasy(jakie funckcje(metody) i zmienne(atrybuty) maja sie znajdowac w klasie)
//Jednoczesnie dolaczamy klase do pliku main
#include "Inc/Wiek.h"

int main(){

//Deklaracja obiektow
    Wiek obiekt_wiek;
    Wiek obiekt_wiek_2;

//wywolanie fuckcji(metody) obiektu
    obiekt_wiek.the_register();

    std::cout<<std::endl;

    obiekt_wiek_2.the_register();

    return 0;
}


/*Po co to tak komplikowac?

Jest to skomplikowane, ale jak widać nasz plik main zawiera zaledwie 10 linijek, a progam uzywa 4 fuckji, i mozemy je 
wywolywac kiedy tylko nam sie podoba. Pomysl jakie to daje możliwosci przy wiekszych porketach :). A to jedynie czesc tego co 
oferuje programowanie obiektowe(OOP) 
*/