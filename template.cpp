

#include <iostream>

// using namespace std causes an error when using templates

template <typename T>

void swap(T& a, T& b){
    T temp = a;

    a = b;
    b = temp;
}

int main(){
    
    int a = 3, b = 8;

    swap(a, b);

    std::cout << a<< " , "<<b<< " "<<std::endl;

    return 0;
}

