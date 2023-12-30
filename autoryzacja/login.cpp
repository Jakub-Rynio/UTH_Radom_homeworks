#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;


string login(){
};

void user_register(std::string loginn, std::string passwordd){

// Odczyt zmiennej licznik z pliku licznik.txt
    string licznik_str, file_path = "data/user-";
    int licznik;

    fstream licznik_file;
    licznik_file.open("data/licznik.txt", ios::in);
    if(!licznik_file.good()){
        cout<<"Blad odczytu";
        exit(0);
    }

    getline(licznik_file,licznik_str);
    licznik = stoi(licznik_str);
    licznik_file.close();

// Dodawanie usera 
    fstream user_file;
    file_path += licznik_str;
    user_file.open(file_path, ios::out);
    user_file << loginn << endl;
    user_file << passwordd << endl;
    user_file.close();

//Aktualizacja licznika
    licznik ++;
    licznik_str = to_string(licznik);
    fstream licznik_file_akt;
    licznik_file_akt.open("data/licznik.txt", ios::out);
    licznik_file_akt << licznik_str;
    licznik_file_akt.close();

    
};

bool find_user(std::string loginn, std::string passswordd){
    // fstream user_file;
    // user_file.open("data/users");

};