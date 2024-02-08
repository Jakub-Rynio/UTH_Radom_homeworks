#include <string>
#include <conio.h>
#include <iostream>
#include <limits>
#include <cmath>

void clean_bufor();

std::string ask_str(std::string com)
{
    std::string data;

    do
    {
        std::cout << com;
        std::getline(std::cin, data);

        if (std::cin.fail())
        {
            clean_bufor();
        }
        else
        {
            break;
        }
    } while (true);

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

int ask_int(std::string com, bool only_positive = false, bool zero = true)
{
    int data;

    do
    {
        std::cout << com;
        std::cin >> data;

        if (std::cin.fail()) clean_bufor(); 

        else if (only_positive && data < 0) clean_bufor(); 

        else if (!zero && data == 0) clean_bufor(); 

        else break; 

    } while (true);

    return data;
}

double ask_double(std::string com, bool only_positive = false, bool zero = true)
{
    double data;

    do
    {
        std::cout << com;
        std::cin >> data;

        if (std::cin.fail()) clean_bufor(); 

        else if (only_positive && data < 0) clean_bufor(); 

        else if (!zero && data == 0) clean_bufor(); 

        else break; 

    } while (true);

    return data;
}

void clean()
{

    std::cout << "\nNacisnij dowolny przycisk aby kontynulowac\n";
    getch();
    system("cls");
}

void clean_bufor()
{

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Dane nieprawidlowe. Podaj dane ponownie." << std::endl;
}