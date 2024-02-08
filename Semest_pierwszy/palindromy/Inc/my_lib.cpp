#include <string>
#include <conio.h>
#include <iostream>
#include <limits>

std::string ask_str(std::string com)
{
    std::string data;

    do
    {
        std::cout << com;
        std::getline(std::cin, data);

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Dane nieprawidłowe. Podaj dane ponownie." << std::endl;
        }
    } while (std::cin.fail());

    return data;
}

std::string space_delate(std::string *data)
{

    for (int i = 0; i < data->length();)
    {

        if ((*data)[i] == ' ')
        {
            data->erase(i, 1);
        }
        else
        {
            i++;
        }
    };

    return *data;
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

void clean()
{

    std::cout << "\nNacisnij dowolny przycisk aby kontynulowac\n";
    getch();
    system("cls");
}