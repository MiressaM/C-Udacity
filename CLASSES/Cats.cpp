/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"Cats.hpp"

int main()
{
    Cats cat1;
    
    
    cat1.setName("Trixie");
    cat1.setAge(5);
    cat1.setBreed("Calico");
    
    
    cout<<"Using the Cat::print function\n";
    cout<<"cat1 = ";
    cat1.printInfo();
    cout<<"\n\n";

    return 0;
}