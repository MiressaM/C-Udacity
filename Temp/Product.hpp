
#include<iostream>

template<class T>

class Multiplier
{
    T m1, m2;
    T product;

public:
    void printEquation();
    void setM1(T m1);
    void setM2(T m2);
    void setProduct();

    T getM1();
    T getM2();
    T getProduct();

};

template <class T>
void Multiplier<T>::printEquation(){

    std::cout << m1<< "*"<<m2<< "="<< product;
}

template <class T>
void Multiplier<T>::setM1(T m1IN){

    m1 = m1IN;
}
template <class T>
void Multiplier<T>::setM2(T m2IN){

    m2 = m2IN;
}

template <class T>
void Multiplier<T>::setProduct(){

    T product = m1*m2;
}

template <class T>
T Multiplier<T>::getM1(){
    return m1;
}
template <class T>
T Multiplier<T>::getM2(){
    return m2;
}

template <class T>
T Multiplier<T>::getProduct(){
    return product;
}