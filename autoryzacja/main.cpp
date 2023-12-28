#include <iostream>
#include <windows.h>
#include <string>
#include "inc/login_system/login.h"

using namespace std;

int main()
{
    string password, login;

    cout << "Podaj login";

    while (!(cin >> login))
    {
        cout << "Dane zostaly podane nieprawidlowo. Podaj je ponownie!";
        cin >> login;
    }

    cout << "Podaj haslo";

    while (!(cin >> password))
    {
        cout << "Dane zostaly podane nieprawidlowo. Podaj je ponownie!";
        cin >> password;
    }

    return 0;
}