#include<iostream>

using namespace std;

class base{
    public:
    base(){

    }
    virtual int get10(){
        return 10;
    }

};

class der: public base{
    public:
    der(){

    }
 int get10(){
        return 30;
    }

};
class der2: public base{
    public:
    der2(){

    }
 int get10(){
        return 40;
    }

};


int main(){
    base* ptr = new der();
    base* ptr2 = new der2();

    der* ptr1 = dynamic_cast<der*>(ptr2);
    // der* ptr1 = dynamic_cast<der*>(ptr);

    if (ptr1 == NULL)
    {
        cout << "NULL\n"; 
    }
    else
    {
            cout << "NOT NULL\n"; 

    }
    

    return 0;
}