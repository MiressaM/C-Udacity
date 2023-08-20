
#include"overloadArray.hpp"

int main(){

    Compare cp;


    int a = 2;
    int b = 3;
     int c = 4;
     float f1 = 10.5;
     float f2 = 3.5;
     float f3 = 5.6;

    char c1 = 'h';
    char c2 = 'b';
    char c3 = 'c';

    int arrayInt[5] = {65,43,2,898,678};
    float arrayInF[4] = {4.5,4.9,4.3,6.5};
    char arrayInC[6] = {'c','z','t','h','e','r'};

     std::cout <<cp.findSmaller(a,b,c)<<'\n';
     std::cout <<cp.findSmaller(f1,f2,f3)<<'\n';
     std::cout <<cp.findSmaller(c1,c2,c3)<<'\n';

     std::cout<<cp.findSmaller(arrayInt, 5)<<" is the smallest of the input array\n";
    std::cout<<cp.findSmaller(arrayInF, 4)<<" is the smallest of the input array\n";
    std::cout<<cp.findSmaller(arrayInC, 6)<<" is the smallest of the input array\n";



    return 0;
}