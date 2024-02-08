class Prostokat
{

private:
    float obw(float, float);
    float pole(float, float);

public:
    Prostokat(float = 1, float = 1);
    float oblicz_obw();
    float oblicz_pole();
    float ask_for_a_b();
    float bok_a, bok_b;
};