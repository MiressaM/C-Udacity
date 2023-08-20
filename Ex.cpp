#include<iostream>

using namespace std;

class Animal{
    public:
    void animalSound(){
        cout<<"The animal makes sound"<<'\n';
    }
};

class Pig:public Animal{
    public:
    void animalSound(){
        cout<<"The pig says: wee wee"<<'\n';
    }

};

class Dog:public Animal{
     public:
    void animalSound(){
        cout<<"The Dog says: bow bow"<<'\n';
    }

};

int main(){

    Animal anm;
    Pig pg;
    Dog dg;

    anm.animalSound();
    pg.animalSound();
    dg.animalSound();

    return 0;
}