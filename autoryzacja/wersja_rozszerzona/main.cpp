#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include "login.h"
#include "inc/my_lib.h"

using namespace std;

int main()
{
    string login, password;
    bool zalogowany_flag = false;
    char wybor;
    int proby = 0;

    while (true)
    {

        cout << "Witaj!\n MENU==========\n'1'- aby sie zalogowac\n'2' - aby dodac uzytkownika \nprzytrzymaj crtl + c - aby wyjsc\n==========\n";
        if (proby > 0)
        {
            cout << "Zostaly Ci " << 5 - proby << " proby logowania\n";
        }

        wybor = getch();

        if (wybor == '1')
        {

            cout << "Podaj login: ";
            login = ask_str();

            cout << endl;
            cout << "Podaj haslo: ";
            password = ask_str();

            if (zalogowano(login, password))
            {
                zalogowany_flag = true;
                while (zalogowany_flag)
                {
                    cout << "Witaj " << login << " Udalo ci sie zalogowac!\nwcisnij 'e' aby sie wylogowac";

                    wybor = getch();
                    if (wybor == 'e')
                    {
                        zalogowany_flag = false;
                    }
                }
            }
            else
            {
                if (proby >= 4)
                {

                    for (int time_coutner = 30; time_coutner > 0; time_coutner--)
                    {
                        cout << "Muisz poczekac " << time_coutner << " Sekund";
                        Sleep(1000);
                        system("cls");
                    }
                    proby = 0;
                }
                else
                {
                    cout << "Logowanie nie powiodlo sie\n";
                }

                proby++;
            }
        }
        else if (wybor == '2')
        {

            cout << "Podaj login: ";
            login = ask_str();

            cout << endl;
            cout << "Podaj haslo: ";
            password = ask_str();

            if (user_register(login, password))
            {
                cout << "Pomyslnie dodano uzytkownika o nazwie " << login << endl;
            }
            else
            {
                cout << "Podana nazwa uzytkownika jest juz zajeta\n Podaj inna nazwe\n";
            }
        }

        clean();
    }

    return 0;
}