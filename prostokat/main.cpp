/*
Autor: Jakub Rynio
Opis: program liczacy pole i obw prostokata 
*/

#include <iostream>

using namespace std;

int main()
{
     // deklaracja zmiennych
     float bokA, bokB, wynik;

     cout<<"Witaj!\nTen program sluzy do obliczania pola i obwodu prostokata\n\n";
     cout<<"       b\n  ------------\n  |          |\na |          |\n  |          |\n  ------------\n\n";

     // przypisanie do zmiennych
     cout<<"Podaj bok 'a': ";
     cin>>bokA;

     cout<<"Podaj bok 'b': ";
     cin>>bokB;

     // sprawdzenie czy boki nie sa mniejsze od 0
     if(bokA <= 0 || bokB <= 0){

          // jesli tak podaj komunikat i zakoncz
          cout<<"\n\npodane dane sa nieprawidlowe taki prostokat nie moze istniec :(";
          return 0;
     }else{
          // wykona sie tylko jesli dane sa prawidlowe

          // oblicznie wyniku
          wynik = 2 * bokA + 2 * bokB;
          // wyswietlanie wyniku
          cout<<"\nobwod = "<< wynik;

          wynik = bokA * bokB;
          cout<<"\nPole = "<< wynik;
     }

     return 0;
}    