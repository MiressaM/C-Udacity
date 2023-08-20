#include <iostream>

template <typename T>

T findSmaller(T a, T b);

int main(){

int a = 4, b =20;

float f1 = 7.8;
float f2 = 9.1;
std::cout<<"\nIntegers compared: "<<findSmaller(a,b)<<'\n';
std::cout<<"\nIntegers compared: "<<findSmaller(f1,f2)<<'\n';


    return 0;
}

template<typename T>
T findSmaller(T a, T b){
    if(a<b){
        return a;
    }else{
        return b;
    }

}