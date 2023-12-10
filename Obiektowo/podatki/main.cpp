#include <iostream>
#include "Inc/Podatki.h"

int main(){

    Podatki p1;
    p1.ask_for_zarobki();

    std::cout<<"W roku 2003 zaplacil bys: "<<p1.oblicz_podatek()<<" PLN podatku";

    return 0;
}