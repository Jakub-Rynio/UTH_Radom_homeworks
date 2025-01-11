#include <string>
#include <iostream>

using namespace std;

class Prostokat{
    protected: 

    double bok_a;
    double bok_b;

    public:

    Prostokat(double ba = 0, double bb = 0) : bok_a(ba), bok_b(bb){};
    friend double operator+(Prostokat p1, Prostokat p2);
    friend ostream& operator<<(Prostokat p1, ostream& s);


    double oblicz_pole(){ return bok_a * bok_b; };

    double get_bok_a(){ return bok_a; };
    double get_bok_b(){ return bok_b; };

    double set_bok_b(double b){bok_b = b;};
    double set_bok_a(double a){bok_a = a;};

};

double operator+(Prostokat p1, Prostokat p2){
    double wynik;

    wynik = p1.bok_a * p1.bok_b + p1.bok_a * p1.bok_b ;
    return wynik;
}

ostream& operator<<(Prostokat p1, ostream& s){
    s << p1.bok_a<<"napis";
    return s;
}

class Prostokat2 : Prostokat{
    using Prostokat::Prostokat;

    public:


};



int main(){

    Prostokat2 p1;
    Prostokat2 *tab[100];

    for(int i = 0; i < 100; i++){
        tab[i] = new Prostokat2;
    }

};