#ifndef TROJKAT_H_
#define TROJKAT_H_
#include "punkt.h"


class Trojkat{

Punkt punkt;
Punkt ok;
Punkt spoko;

public:
    Trojkat(Punkt p1,Punkt p2, Punkt p3);
    float obw();
    float pole();


};





#endif // TROJKAT_H_
