/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    private:
        string name;
        int licensenumber;
    public:
        Dog();
        Dog(string nameIn);
        Dog(int liIn);
        Dog(string nameIn, int linIn);
        
        string getName();
        int getLicense();
    
};

Dog::Dog(){
    name = "NA";
    licensenumber=0;
}
Dog::Dog(string nameIn){
    name = nameIn;
    licensenumber=0;
}

Dog::Dog(int linIn){
    name = "NA";
    licensenumber = linIn;
}

Dog::Dog(string nameIn, int linIn ){
    name = nameIn;
    licensenumber = linIn;
}

string Dog::getName(){
    return name;
}

int Dog::getLicense(){
    return licensenumber;
}