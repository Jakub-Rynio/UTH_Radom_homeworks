/*
Autor: Jakub Rynio
Opis: Program obliczajacy podatek w roku 2003
W razie pytan lub uwag pisz do mnie na mesanger lub mail - RynioJakub@proton.me
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int dzien,miesiac,rok,r,w,nr_dnia;


    cout<<"UWAGA: program dziala dla lat od roku 999\n";
    cout<<"Ten program oblicza dzien tygodnia na podstawie daty\nWprowadz date w formacie (d m r)\n";

    if(!(cin>>dzien) || dzien > 31 || dzien <= 0){
        cout<<"Dzien jest podany nieprawidlowo\nPoprawny format to (d m r)";
        return 0;
    }

    if(!(cin>>miesiac) || miesiac > 12 || dzien <= 0){
        cout<<"Miesiac jest podany nieprawidlowo\nPoprawny format to (d m r)";
        return 0;
    }

    if(!(cin>>rok) || rok <= 999){
        cout<<"Rok zostal podany nieprawidlowo\nPoprawny format to (d m r)\nRok musi byc wiekszy od 999";
        return 0;
    }


    if(miesiac == 1 || miesiac == 2){
        miesiac += 10;
        rok --;
    }else miesiac -= 2;

    r = rok % 100;
    w = round(rok / 100);
    nr_dnia = ((13 * miesiac - 1)/5 + dzien + r / 4 + w / 4 + r + 5 * w) % 7;

    switch(nr_dnia){
        case 0: cout<<"dzien tygodnia tego dnia to: Niedziela";
            break;
        case 1:  cout<<"dzien tygodnia tego dnia to: Poniedzialek";
            break;
        case 2:  cout<<"dzien tygodnia tego dnia to: Wtorek";
            break;
        case 3:  cout<<"dzien tygodnia tego dnia to: Sroda";
            break;
        case 4:  cout<<"dzien tygodnia tego dnia to: Czwartek";
            break;
        case 5:  cout<<"dzien tygodnia tego dnia to: Piatek";
            break;
        case 6:  cout<<"dzien tygodnia tego dnia to: Sobota";
            break;
    }

    return 0;
}