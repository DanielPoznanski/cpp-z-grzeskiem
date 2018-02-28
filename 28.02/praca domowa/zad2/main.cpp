#include <iostream>
#include <cmath>

using namespace std;

class Kwadratowa
{

    int a;
    int b ;
    int c ;
    int delta;
    int x1 = 0 ;
    int x2 = 0 ;
    public :
    void setCoefficients(int a2, int b2, int c2);
    bool isReal();
    bool aZero();
    int X1();
    int X2();

};

void Kwadratowa::setCoefficients(int a2, int b2, int c2)
{

    a=a2;
    b=b2;
    c=c2;
}

bool Kwadratowa :: isReal()
{

    delta = b*b-4*a*c;


    if(delta<0)
        return 0;

    else
        return 1;
}
bool Kwadratowa :: aZero()
{

    if(a!=0)
        return 1;
    else
        return 0;


}

int Kwadratowa :: X1()
{
    delta = b*b-4*a*c;
    x1=(b*(-1)-sqrt(delta))/2*a;
    return x1;
}
int Kwadratowa :: X2()
{
    delta = b*b-4*a*c;
    x2=(b*(-1)+sqrt(delta))/2*a;
    return x2;
}





int main()
{
    Kwadratowa kwadratowa;

    kwadratowa.setCoefficients(2,3,4);

    cout << kwadratowa.X1() <<' ' << kwadratowa.X2() << endl;
    return 0;
}
