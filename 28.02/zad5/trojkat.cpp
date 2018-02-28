#include "trojkat.h"
#include <cmath>

float odleglosc(Punkt punkt , Punkt ok){
float odleglosc2=sqrt(pow(ok.getA()-punkt.getA(),2)+(pow(ok.getB()-punkt.getB(),2)));
return odleglosc2;
}



Trojkat::Trojkat(Punkt p1,Punkt p2, Punkt p3){

punkt = p1;
ok = p2;
spoko= p3;

}
  float Trojkat ::obw(){
  float licznik = 0 ;
  licznik = odleglosc(punkt,ok)+odleglosc(punkt,spoko)+odleglosc(spoko,ok);
  return licznik;
  }
    float Trojkat :: pole(){
  float   licznik = odleglosc(punkt,ok)+odleglosc(punkt,spoko)+odleglosc(spoko,ok);
  float pole = 0;

  pole=sqrt(licznik/2*(licznik/2-odleglosc(punkt,ok))*(licznik/2-odleglosc(punkt,spoko))*(licznik/2-odleglosc(spoko,ok)));

    }
