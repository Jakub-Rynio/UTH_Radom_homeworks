#include <iostream>
#include <algorithm>
#include <string>
#include "Inc/my_lib.cpp"

using namespace std;

bool is_anagram(string ww1, string ww2)
{

    sort(ww1.begin(), ww1.end());
    sort(ww2.begin(), ww2.end());

    if (ww1 == ww2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string w1, w2;
    string *str_pointer;

    w1 = ask_str("Podaj pierwsze slowo: ");
    w2 = ask_str("Podaj drugie slowo: ");

    str_pointer = &w1;
    space_delate(str_pointer);
    transform(str_pointer->begin(), str_pointer->end(), str_pointer->begin(), ::tolower);

    str_pointer = &w2;
    space_delate(str_pointer);
    transform(str_pointer->begin(), str_pointer->end(), str_pointer->begin(), ::tolower);

    if (is_anagram(w1, w2))
    {
        cout << "podane slowa to anagramy";
    }
    else
    {
        cout << "podane slowa to nie anagramy";
    };

    return 0;
}
