/*
Autor: Jakub Rynio
Opis: Program obliczajacy podatek w roku 2003
W razie pytan lub uwag pisz do mnie na mesanger lub mail - RynioJakub@proton.me
*/
# include <iostream>
# include <cmath>

using namespace std;

int main(){

    float zarobki;

    cout<<"Ten program oblicza ile powinienies zaplacic podatku w roku 2003\n";
    cout<<"Podaj swoje miesieczne zarobki: ";
    if(!(cin>>zarobki)){
        return 0;
    }

    zarobki = ceil(zarobki * 100)/100;

    if(zarobki < 2789.89){
        cout<<"Nie zaplacisz od tego podatku :)";

    } else if(zarobki > 2789.89 && zarobki < 37024){
        cout<<"Zaplacisz: "<<ceil((zarobki * 0.19 - 530.08) * 100)/100<<" PLN podatku";

    } else if(zarobki > 37024 && zarobki < 74048){
        cout<<"Zaplacisz: "<< ceil(6504.48 + ((zarobki - 37024) * 0.3)*100)/100<<" PLN podatku";

    } else if(zarobki > 74048){
        cout<<"Zaplacisz: "<< ceil(17611.68 + ((zarobki-74048) * 0.4)*100)/100<<" PLN podatku";
    }

    return 0;
}