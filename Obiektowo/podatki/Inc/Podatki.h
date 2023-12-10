class Podatki{

private:
    float zarobki;
    float oblicz_pod(float);

public:
    Podatki(float = 1);
    float ask_for_zarobki();
    float oblicz_podatek();
};