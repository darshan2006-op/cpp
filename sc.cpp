#include<iostream>

using namespace std;

int main(){
    int a = 30;
    float b = static_cast<float>(a);
    double d = static_cast<double>(a);
    printf("Value Of A is %d\nValue of B is %f\nValue of D is %lf", a,b, d);
    return 0;
}