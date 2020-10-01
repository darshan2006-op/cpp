#include<iostream>

using namespace std;

class myc{
    int a;
    int b;
    public:
    myc(int c, int d): a(c), b(d){

    }
    int get(){
        return a;
    }
    int get2(){
        return b;
    }

    
};


int main(){
    
    int b;
    cout << "Enter a Number:- " ;
    cin >> b;
    int *a = new int(b);
    // char *c = dynamic_cast<char*>(a); // ERROR!
    char *c = reinterpret_cast<char*>(a);
    float *d = reinterpret_cast<float*>(a);
    double *e = reinterpret_cast<double*>(a);
    myc *f = reinterpret_cast<myc*>(a);

    b =0;
    cout << "Your Integer: " << *a << endl 
    << "Char form: " << c << endl 
    << "Float form: " << *d << endl
    << "Double form: " << *e << endl
    << "Myc A form: " << f->get() << endl
    << "Myc b form: " << f->get2();

    return 0;
}