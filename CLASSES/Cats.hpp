/*Header file for main.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include<iostream>

using namespace std;

class Cats
{
    string name;
    int age;
    string breed;
    
public:
    void setName(string nameIn);
    void setAge(int age);
    void setBreed(string breedIn);
    
    string getName();
    int getAge();
    string getBreed();
    void printInfo();
};

void Cats::setName(string nameIn)
{
    //ToDo: finish this function
    name = nameIn;
}

void Cats::setAge(int ageIn)
{
    //ToDo: finish this function
    age = ageIn;
}

void Cats::setBreed(string breedIn)
{
    //ToDo: finish this function
    breed = breedIn;
}


string Cats::getName()
{
    //ToDo: finish this function
    return name;
}

int Cats::getAge()
{
    //ToDo: finish this function
    return age;
}
string Cats::getBreed()
{
    
    return breed;
}

 
void Cats::printInfo()
{
    //ToDo: finish this function
    cout<<name<<" "<<age<<" "<<breed;
}
    


