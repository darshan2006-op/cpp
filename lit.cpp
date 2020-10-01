#include<iostream>

using namespace std;

constexpr float operator"" _cm(long double a){
    return a*10;
}

int main(){
    float a = 30.8567_cm;
    cout << a << endl;
    return 0;
}