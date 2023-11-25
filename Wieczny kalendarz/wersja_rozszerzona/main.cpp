/*
Autor: Jakub Rynio
Opis: Program obliczajacy podatek w roku 2003
W razie pytan lub uwag pisz do mnie na mesanger lub mail - RynioJakub@proton.me
*/

#include <iostream>
#include <cmath>
#include <string>
// Tylko po to aby napisac byl/bedzie
#include <windows.h>
#include <winbase.h>

using namespace std;

int main(){

    int dzien,miesiac,rok,r,w,nr_dnia;
    string byl_bedzie,dzien_tyg,miesiac_slownie;

    // Tylko po to aby napisac byl/bedzie
    SYSTEMTIME st;
    GetSystemTime(&st);

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


    switch(miesiac){
        case 1: miesiac_slownie = "Stycznia"; break;
        case 2: miesiac_slownie = "Lutego"; break;
        case 3: miesiac_slownie = "Marca"; break;
        case 4: miesiac_slownie = "Kwietnia"; break;
        case 5: miesiac_slownie = "Maja"; break;
        case 6: miesiac_slownie = "Czerwca"; break;
        case 7: miesiac_slownie = "Lipca"; break;
        case 8: miesiac_slownie = "Sierpnia"; break;
        case 9: miesiac_slownie = "Wrzesnia"; break;
        case 10: miesiac_slownie = "Pazdziernika"; break;
        case 11: miesiac_slownie = "Listopada"; break;
        case 12: miesiac_slownie = "Grudnia"; break;
    }


    // Tylko po to aby napisac byl/bedzie
    if(st.wYear == rok && st.wMonth == miesiac && st.wDay == dzien){

        byl_bedzie = "jest";
    }else if(st.wYear > rok){

        byl_bedzie = "byl";
    }else if(st.wYear < rok){

        byl_bedzie = "bedzie";
    }else if(st.wMonth > miesiac){

        byl_bedzie = "byl";
    }else if(st.wMonth < miesiac){

        byl_bedzie = "bedzie";
    }else if(st.wDay > dzien){

        byl_bedzie = "byl";
    }else if(st.wDay < dzien){

        byl_bedzie = "bedzie";
    }


    if(miesiac == 1 || miesiac == 2){
        miesiac += 10;
        rok --;
    }else miesiac -= 2;

    r = rok % 100;
    w = round(rok / 100);
    nr_dnia = ((13 * miesiac - 1)/5 + dzien + r / 4 + w / 4 + r + 5 * w) % 7;

    switch(nr_dnia){
        case 0: dzien_tyg = " Niedziela";
            if(byl_bedzie == "byl") byl_bedzie = "byla";
            break;
        case 1: dzien_tyg = " Poniedzialek";
            break;
        case 2: dzien_tyg = " Wtorek";
            break;
        case 3: dzien_tyg = " Sroda";
            if(byl_bedzie == "byl") byl_bedzie = "byla";
            break;
        case 4: dzien_tyg = " Czwartek";
            break;
        case 5: dzien_tyg = " Piatek";
            break;
        case 6: dzien_tyg = " Sobota";
            if(byl_bedzie == "byl") byl_bedzie = "byla";
            break;
    }

    if(byl_bedzie == "jest"){

        cout<<"Dzis jest "<< dzien_tyg;
    }else{

        cout<<"Dnia "<<dzien<<" "<<miesiac_slownie<<" "<<rok<<"roku "<<byl_bedzie<<dzien_tyg;
    }

    return 0;
}