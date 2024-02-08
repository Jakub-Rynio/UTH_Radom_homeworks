#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include "Inc/my_lib.cpp"

using namespace std;
struct punkt;

struct punkt
{

    double x, y;
};

struct trojkat
{

    punkt A;
    punkt B;
    punkt C;
};

void obrot_punktu(struct punkt &p, double kat_obrotu)
{
    double x_copy = p.x;

    kat_obrotu = kat_obrotu * M_PI / 180;
    p.x = p.x * cos(kat_obrotu) - p.y * sin(kat_obrotu);
    p.y = x_copy * sin(kat_obrotu) + p.y * cos(kat_obrotu);
};

int main()
{

    double kat;

    trojkat t1;

    t1.A.x = ask_double("podaj wspolrzedna 'X' punku A: ");
    t1.A.y = ask_double("podaj wspolrzedna 'Y' punku A: ");

    t1.B.x = ask_double("podaj wspolrzedna 'X' punku B: ");
    t1.B.y = ask_double("podaj wspolrzedna 'Y' punku B: ");

    t1.C.x = ask_double("podaj wspolrzedna 'X' punku C: ");
    t1.C.y = ask_double("podaj wspolrzedna 'Y' punku C: ");

    kat = ask_double("podaj kat o jaki chesz obrocic trojkat: ");

    cout << "wspolrzedne punktow przed obrotem\nPunkt A(" << t1.A.x << "," << t1.A.y << ")\n";
    cout << "Punkt B(" << t1.B.x << ',' << t1.B.y << ")\nPunkt C(" << t1.C.x << ',' << t1.C.y << ")\n";

    obrot_punktu(t1.A, kat);
    obrot_punktu(t1.B, kat);
    obrot_punktu(t1.C, kat);

    cout << "wspolrzedne punktow po obrocie\nPunkt A(" << t1.A.x << "," << t1.A.y << ")\n";
    cout << "Punkt B(" << t1.B.x << ',' << t1.B.y << ")\nPunkt C(" << t1.C.x << ',' << t1.C.y << ")\n";

    return 0;
};
