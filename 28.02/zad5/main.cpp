#include <iostream>
#include "punkt.h"
#include <cmath>

using namespace std;


float odleglosc(Punkt punkt , Punkt ok){
float odleglosc2=sqrt(pow(ok.getA()-punkt.getA(),2)+(pow(ok.getB()-punkt.getB(),2)));
return odleglosc2;
}



int main()
{
    Punkt punkt(13,456);
    Punkt ok ( 84654,564543);
    Punkt serio(687876,5435);


    cout << odleglosc(punkt,ok) << endl;
    return 0;
}
