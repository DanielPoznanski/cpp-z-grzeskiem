#include <iostream>

using namespace std;


class Punkt{

float a;
float b;

public:

float getA()
{
  return a;

}

float getB(){

return b;
}

void setA(float x){

a=x;

}

void setB(float y){
b=y;
}

void move(float x, float y){
a=a+x;
b=b+y;

}


}
;





int main()
{

    Punkt punkt;
    punkt.setA(5.8);
    punkt.setB(80.1);
    punkt.move(1.2,-80.1);




    cout << punkt.getA() << ' ' << punkt.getB() << endl;
    return 0;
}
