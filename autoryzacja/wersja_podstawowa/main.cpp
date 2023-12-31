/*
Autor: Jakub Rynio
Opis: Program jest jak widac...
W razie pytan lub uwag pisz do mnie na mesanger lub mail - RynioJakub@proton.me
*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;
//sprawdza czy jest taki uzytkownik
bool zalogowano(std::string user_input_login, std::string user_input_password)
{
    string log, pass;

    fstream user_login_file;
    user_login_file.open("data/users/user.txt", ios::in);

    if (!(user_login_file))
    {
        cout << "blad odczytu";
        exit(0);
    }
    getline(user_login_file, log);

    if (log == user_input_login)
    {
        getline(user_login_file, pass);

        if (pass == user_input_password)
        {
            user_login_file.close();
            return true;
        }
    }

    user_login_file.close();

    return false;
};

int main()
{

    string login, password;
    int proby = 0;

    while (true)
    {
        if (proby >= 3)
        {

            for (int time_coutner = 30; time_coutner > 0; time_coutner--)
            {
                cout << "Muisz poczekac " << time_coutner << " Sekund";
                Sleep(1000);
                system("cls");
            }
            proby = 0;
        }

        cout << "\nPodaj login: ";
        cin >> login;

        cout << "\nPodaj haslo: ";
        cin >> password;

        if (zalogowano(login, password))
        {
            cout << "\nWitaj!" << login << "Udalo Ci sie zalogowac";
        }
        else
            proby++;
    }

    return 0;
}