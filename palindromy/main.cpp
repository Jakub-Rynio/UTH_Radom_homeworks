#include <iostream>
#include <algorithm>
#include <string>
#include "Inc/my_lib.cpp"

using namespace std;

int main(){

    string w1;
    string* str_pointer;

    w1 = ask_str("Podaj slowo lub zdanie");

    str_pointer = &w1;
    space_delate(str_pointer);
    transform(str_pointer->begin(),str_pointer->end(), str_pointer->begin(), ::tolower);
    
    
    return 0;
};