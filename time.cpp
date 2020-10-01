#include<iostream>
#include <chrono>



struct timer
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    std::chrono::duration<float> dur;

    timer(){
        start = std::chrono::high_resolution_clock::now();
    }

    ~timer(){
        end = std::chrono::high_resolution_clock::now();
        dur = end-start;
        float time_in_mili = dur.count()*1000.0f;
    std::cout << "time in micro: " << time_in_mili << "us\n" << "time in mili: " << dur.count() << "ms\n" << "time in minutes: " << time_in_mili/60000 << "min\n";
    }

};

int main(){
    struct timer t;
    // for (int i = 0; i < 1000000; i++)
    // {
    // {
    //     struct timer b;
    //     std :: std::cout << i << std::std::endl;
    // }  
    // }

    return 0;
}