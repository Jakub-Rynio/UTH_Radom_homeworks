/*
Autor: Jakub Rynio
Opis: Program robi choinke :)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    for(int i=0; i>-20; i--){

        for(int j=0; j<40; j++){
            if(i+19 <= j && abs(i)+20 >= j){
                cout<<"X";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}

/*
Jak to rozkminilem?

Mozemy spojrzec na nasza choinke jako na uklad wspolrzednych
   jjjjjjjj
   01234567
   ________
i 0   XX
i-1  XXXX
i-2 XXXXXX
i-3XXXXXXXX


Teraz zobaczmy jakie "j" ida do choinki

   jjjjjjjj
   01234567
   ________
i 0   34
i-1  2345
i-2 123456
i-301234567


jak widac potrzeba nam kolejnych przedzialow "j"
    <3,4>
  <2,3,4,5>
 <1,2,3,4,5,6>
<0,1,2,3,4,5,6,7>

Przedzial zmniejsza sie o 1 "lewo" i zwieksza sie o 1 w "prawo" wiec wystarczy go odpowiednio ograniczyc

dla naszego pierwszego "i" = 0 chce aby poczatek przedzialu byl rowny 3 wiec dodaje 3 do i( w kodzie dodaje  19 bo gdzie indziej jest "srodek choinki")
    Nasz kod wyglada nastepujaco:

            
    for(int i=0; i>-4; i--){

        for(int j=0; j<8; j++){
            if(i+3 <= j){
                cout<<"X";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    Dziala nastepujaco
    dla i = 0 kolejno:
        (0+3) <= 0 | Falsz wiec " "
        (0+3) <= 1 | Falsz wiec " "
        (0+3) <= 2 | Falsz wiec " "
        (0+3) <= 3 | Prawda wiec "X"
        (0+3) <= 4 | Prawda wiec "X"
           Dalej oczywiscie tylko "X"

        teraz i zmniejszamy o 1 (i = -1)
            ((-1)+3) <= 0 | Falsz wiec " " 
            ((-1)+3) <= 1 | Falsz wiec " " 
            ((-1)+3) <= 2 | Falsz wiec "X" 
            ((-1)+3) <= 3 | Prawda wiec "X" 
            ((-1)+3) <= 4 | Prawda wiec "X" 

    wyjdzie nam 
       jjjjjjjj
       01234567
       ________
    i 0   XXXXX
    i-1  XXXXXX
    i-2 XXXXXXX
    i-3XXXXXXXX

    Na tym etapie mamy przedzialy "j" ograniczone od poczatku do + niekonczonosci

       <3,+nieskonczonosc>
      <2,+nieskonczonosc>
     <1,+nieskonczonosc>
    <0,+ nieskonczonosc>

Przypominam ze potrzebujemy przedzialow "j"

    <3,4>
  <2,3,4,5>
 <1,2,3,4,5,6>
<0,1,2,3,4,5,6,7>

Jestesmy na dobrej drodze wystarczy ograniczyc przedzialy po prawej! :)


teraz chce aby poczatkiem mojego przedzialu bylo 4, no i ewidetnie musi to rosnac. A "i" idzie na minus :(...
Mozna to zmienic waroscia bezwzgledna
chce zamknac przedzial w druga strone wiec zmieniam znak


 wtedy otrzymujemy warunek 

    for(int i=0; i>-4; i--){

        for(int j=0; j<8; j++){
            if(abs(i)+4 >= j){
                cout<<"X";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    Kod zachowa sie tak:

    
    dla i = 0 kolejno:
        (|0|+4) >= 0 | Prawda wiec "X"
        (|0|+4) >= 1 | Prawda wiec "X"
        (|0|+4) >= 2 | Prawda wiec "X"
        (|0|+4) >= 3 | Prawda wiec "X"
        (|0|+4) >= 4 | Prawda wiec "X"
        (|0|+4) >= 5 | Falsz wiec " "
           Dalej oczywiscie tylko " "

        teraz i zmniejszamy o 1 (i = -1)
            |(-1)|+4 >= 0 | Prawda wiec "X" 
            |(-1)|+4 >= 1 | Prawda wiec "X" 
            |(-1)|+4 >= 2 | Prawda wiec "X" 
            |(-1)|+4 >= 3 | Prawda wiec "X" 
            |(-1)|+4 >= 4 | Prawda wiec "X" 
            |(-1)|+4 >= 5 | Prawda wiec "X" 
            |(-1)|+4 >= 6 | Falsz wiec " " 


    Czyli graficznie:
                
    wyjdzie nam 
       jjjjjjjj
       01234567
       ________
    i 0XXXXX   
    i-1XXXXXX  
    i-2XXXXXXX 
    i-3XXXXXXXX

    Natomiast przedzialy wygladaja tak:
    
    <-nieskonczonosc,4>
     <-nieskonczonosc,5>
      <-nieskonczonosc,6>
       <-nieskonczonosc,9>




    Teraz wystarczy wyciagnac sume przedzialow

    
    <-nieskonczonosc,4>              
     <-nieskonczonosc,5>                
      <-nieskonczonosc,6>
       <-nieskonczonosc,9>

             U

       <3,+nieskonczonosc>
      <2,+nieskonczonosc>
     <1,+nieskonczonosc>
    <0,+ nieskonczonosc>


Co daje nam :

    <3,4>
  <2,3,4,5>
 <1,2,3,4,5,6>
<0,1,2,3,4,5,6,7>

sa to elementy zawarte zarowno w 1 jak i w drugim przedziale wiec ostatecznie nasz kod wyglada tak:
            
    for(int i=0; i>-4; i--){

        for(int j=0; j<8; j++){
            if(i+3 <= j && abs(i)+4 >= j){
                cout<<"X";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

Napewno sa tu bledy i napewno da sie to zrobic lepiej. Jesli jakies widzisz prosze napisz do mnie.
Bledy moga wynikac z tego ze dzisiaj mi sie juz nie chce. Wstawiam to na gita, i ide cos zjesc... 

*/