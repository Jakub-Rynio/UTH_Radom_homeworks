#include <string>
#include <conio.h>
#include <iostream>
#include <limits>

std::string ask_str()
{
    std::string data;

    do {
        std::cout << "Podaj dane: ";
        std::getline(std::cin, data);

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Dane nieprawidłowe. Podaj dane ponownie." << std::endl;
        }
    } while (std::cin.fail());

    return data;
}

int ask_int()
{
    int data;

    while (!(std::cin >> data))
    {
        std::cout << "dane nieprawidlowe" << std::endl;
        std::cout << "Podaj dane ponownie";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    };

    return data;
}

void clean(){

    std::cout << "\nNacisnij dowolny przycisk aby kontynulowac\n";
    getch();
    system("cls");
}