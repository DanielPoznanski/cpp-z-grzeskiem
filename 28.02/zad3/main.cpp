#include <iostream>

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

void move(float x, float y){
a=a+x;
b=b+y;

}
void move(Punkt dupa){
a=a+dupa.a;
b=b+dupa.b;

}

}
;





int main()
{

    Punkt punkt(15,5);
    Punkt ok(564.465,46.8);
    punkt.move(1.2,-80.1);
    punkt.move(ok);




    cout << punkt.getA() << ' ' << punkt.getB() << endl;
    return 0;
}
