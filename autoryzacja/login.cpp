#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

const string file_path = "data/users/user-";

int open_licznik()
{

    // Odczyt zmiennej licznik z pliku licznik.txt
    string bufor;
    int licznik;

    fstream licznik_file;
    licznik_file.open("data/licznik.txt", ios::in);
    if (!licznik_file.good())
    {
        cout << "Blad odczytu";
        exit(0);
    }

    getline(licznik_file, bufor);
    licznik = stoi(bufor);
    licznik_file.close();

    return licznik;
}

bool find_user_login(std::string user_input)
{
    int i = 1;
    string find_user_login_file_path, i_str, log;

    while (i <= open_licznik() - 1)
    {

        i_str = to_string(i);
        find_user_login_file_path = file_path + i_str;

        fstream user_login_file;
        user_login_file.open(find_user_login_file_path, ios::in);

        if (!(user_login_file))
        {
            cout << "blad odczytu";
            exit(0);
        }

        getline(user_login_file, log);
        if (log == user_input)
        {
            user_login_file.close();
            return true;
        }
        else
        {
            i++;
            user_login_file.close();
        }
    }

    return false;
};

bool zalogowano(std::string user_input_login, std::string user_input_password)
{
    int i = 1;
    string find_user_login_file_path, i_str, log,pass;

    while (i <= open_licznik() - 1)
    {

        i_str = to_string(i);
        find_user_login_file_path = file_path + i_str;

        fstream user_login_file;
        user_login_file.open(find_user_login_file_path, ios::in);

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
        else
        {
            i++;
            user_login_file.close();
        }
    };

    return false;
};


bool user_register(std::string loginn, std::string passwordd)
{
    int licznik;
    string licznik_str, user_register_file_path;

    licznik = open_licznik();
    licznik_str = to_string(licznik);

    if (!(find_user_login(loginn)))
    {

        // Dodawanie usera
        fstream user_file;
        user_register_file_path = file_path + licznik_str;
        user_file.open(user_register_file_path, ios::out);
        user_file << loginn << endl;
        user_file << passwordd << endl;
        user_file.close();

        // Aktualizacja licznika
        licznik++;
        licznik_str = to_string(licznik);
        fstream licznik_file_akt;
        licznik_file_akt.open("data/licznik.txt", ios::out);
        licznik_file_akt << licznik_str;

        return true;
    }
    else return false;

};
