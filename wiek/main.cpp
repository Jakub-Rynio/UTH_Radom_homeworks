/*
Autor: Jakub Rynio
Opis: program obliczajacy wiek uzytkownika za 25lat 
*/

#include <iostream>

using namespace std;

int main()
{
     // deklaracja zmiennej
     float obecny_wiek;

     cout<<"Witaj!\nTen program sluzy do obliczania twojego wieku za 25 lat\n\n";

     // przypisanie do zmiennej
     cout<<"Podaj swoj wiek: ";
     cin>>obecny_wiek;

     // sprawdza czy wiek jest wiekszy od 0
     if(obecny_wiek < 0){

          // komunikat jesli dane nie prawidlowe
          cout<<"\n\npodane dane sa nieprawidlowe lub jeszcze sie nie urodziles :(";
     }else{

          // jesli dane prawidlowe wyswietl odpowiedz i jednoczesnie oblicz wynik
          cout<<"\nZa 25 lat bedziesz mial "<<obecny_wiek + 25<<" lat";
     }

     return 0;
}    