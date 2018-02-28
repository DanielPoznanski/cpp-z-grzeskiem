#include <iostream>

using namespace std;

class Account{

int id ;
float balance;
float history[100];
int transaction;


public :
    Account(){

    transaction = 0 ;
    }
     int getid(){
    return id;
    }
    float getbalance(){
    return balance;
    }
    void setid(int x){

    id=x;

    }

    void setbalance(float x){

    balance=x;


    }

    void trans(float y){

    history[transaction]=y;
    transaction++;
    balance=balance+y;
    }
    int last(){

    return history[transaction]-1;

    }
    void showHistory(){
    for (int i = 0 ; i < transaction ; i++) {
        cout << history[i]<<'\n';


    }
    }






};


int main()
{
    Account konto;
    konto.setbalance (10000);
    konto.trans (-800);
    konto.trans (45);
    konto.trans (9000);
    konto.trans (-100);
    konto.showHistory();
    cout << "Hello world!" << endl;
    return 0;
}
