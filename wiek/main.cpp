/*
Autor: Jakub Rynio
Opis: program obliczajacy wiek usera za 25lat z objasnieniem
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     int obecny_wiek;
     // zmienne majace wartosc 1 czyli true lub 0 czyli false
     bool main_flag, menu_flag;
     // zmienna przechowujaca tylko jeden znak np 'y'
     char wybor;

     main_flag = true;

     // petle powtarzajace kod w niej dopoki warunek jest prawdziwy czyli: main_flag == true
     while(main_flag){

          menu_flag = true;

          // komunikaty dla usera, przypisanie danych do zmiennych
          cout<<"Witaj!\nTen program sluzy do obliczania twojego wieku za 25 lat\n\n";

          cout<<"Podaj swoj wiek: ";
          cin>>obecny_wiek;

          //sprawdzenie czy user sie urodzil
          if(obecny_wiek < 0){

               cout<<"\n\npodane dane sa nieprawidlowe lub jeszcze sie nie urodziles :(";
          }else{
               //instukcja wyknywana tylko gdy dane sa prawidlowe: dodanie do zmiennej 25 i wyswietlenie
               cout<<"\nZa 25 lat bedziesz mial "<<obecny_wiek + 25<<" lat";
          }

          // petla w petli prawdziwa dla menu_flag == true
          while(menu_flag){

               cout<<"\n\nCzy chcesz sprawdzic jeszcze raz?\n(Y/N)";

               // czysci strumen wejsciowy cin
               cin.ignore();

               // pobiera jedynie jeden znak i zapisuje w zmiennej typu char czyli wybor
               wybor = getch();

               // to cos jak if tylko fajniejsze poprostu jesli user wcisnie y/Y to odpala sie pierwsza instukcja
               // jesli n/N to odpala sie instrukcja 2 
               switch (wybor) {

               case 'y':
               case 'Y':
                    // to polecenie do konsoli systemowej czysci konsole 
                    system("cls");
                    //ustawienie tej flagi na false powoduje wyjscie z pierwszej petli po wyjsciu przechwyci nas petla main
                    menu_flag = false;
                    //pododuje wyjscie z instukcji posostale przypadki "case" nie beda wykonywane
                    break;
               
               case 'n':
               case 'N':
                    // tym razem obie flagi sa ustawione na false co powoduje ze petla main sie nie odpali i skonczymy dzialanie progamu
                    menu_flag = false;
                    main_flag = false;
                    break;
               default:
                    break;
               }

          }
     }
     return 0;
}    