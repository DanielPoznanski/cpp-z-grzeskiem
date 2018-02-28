#include <iostream>
#include <cmath>

using namespace std;


class Punkt{

float a;
float b;

public:

Punkt(float x, float y){ //konstruktor ( zawsze nazywa sie tak samo jak klasa )

    a=x;
    b=y;

    }

float getA()
{
  return a;

}

float getB(){

return b;
}


};

float odleglosc(Punkt punkt , Punkt ok){
float odleglosc2=sqrt(pow(ok.getA()-punkt.getA(),2)+(pow(ok.getB()-punkt.getB(),2)));
return odleglosc2;
}





int main()
{

    Punkt punkt(13,456);
    Punkt ok ( 84654,564543);





    cout << odleglosc(punkt,ok) << endl;
    return 0;
}
