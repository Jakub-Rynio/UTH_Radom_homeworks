#include <iostream>
#include <algorithm>
#include <string>
#include "Inc/my_lib.cpp"

using namespace std;

bool is_palindrom(string ww1)
{

    string ww2;

    string *str_pointer;
    str_pointer = &ww1;
    space_delate(str_pointer);
    transform(str_pointer->begin(), str_pointer->end(), str_pointer->begin(), ::tolower);

    ww2 = ww1;

    reverse(str_pointer->begin(), str_pointer->end());

    return (ww1 == ww2);
}

int main()
{

    string w1;

    w1 = ask_str("Podaj slowo lub zdanie: ");

    is_palindrom(w1) ? "podane zdanie jest palindromem" : "podane zdanie nie jest palindromem";

    return 0;
};