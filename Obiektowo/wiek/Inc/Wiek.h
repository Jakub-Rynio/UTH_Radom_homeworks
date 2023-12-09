// To deklaracja klasy cos jak (int a) tylko tu deklarujemy zmienne(atrybuty) i funckje(metody)
class Wiek
{
    //private oznacze ze te merody i atrybuty moga być wykorzystywane tylko w tej klasie 
private:
    int wiek;
    int oblicz(int);
    int get_wiek();
    void show();

//public oznacze ze moge sobie wywolywac te fuckcje w programie 
public:
    void the_register();
    Wiek(int = 1);
};