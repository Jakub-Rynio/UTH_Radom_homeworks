#include <string>

//Zwraca wartosc licznika 
int open_licznik();

//sprawdza czy udalo sie zalogowac
bool zalogowano(std::string, std::string);

//sprawdza czy istnieje dany login
bool find_user_login(std::string);

//dodaje uzytkownika do bazy
bool user_register(std::string, std::string);