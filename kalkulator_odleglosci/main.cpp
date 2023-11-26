/*
Autor: Jakub Rynio
Opis: Program Przelicza metry na inne jednostki
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    char wybor;
    const float cale = 39.3701;
    const float stopy = 3.2808398950131;
    double metry;

    cout<<"\nTen program przelicza metry na inne jednostki\nPodaj odleglosc jaka chcesz przeliczyc w metrach: ";

    if(!(cin>>metry)){
        cout<<"liczba metrow podana nieprawidlowo";
        return 0;
    }
    
    cout<<"\nChce przeliczyc metry na:\n  1.milimetry\n  2.kilometry\n  3.cale\n  4.stopy\nWybiez opcje od 1 do 4\n\n";
    wybor = getch();


    switch(wybor){
        case '1': cout<<metry<<"m "<<"to: "<<metry * 1000<<"mm"; 
            break;
        case '2': cout<<metry<<"m "<<"to: "<<metry / 1000<<"km";
            break;
        case '3': cout<<metry<<"m "<<"to: "<<metry * cale<<"in";
            break;
        case '4': cout<<metry<<"m "<<"to: "<<metry * stopy<<"ft";
            break;
        default: cout<<"podana musisz wybrac opcje od 1 do 4";
    }

    return 0;
}