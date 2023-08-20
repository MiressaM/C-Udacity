/*Practice inheritance; create a public base class and a derived class. 
Create a class called Flower. Then create a derived class called Rose. 
The derived class should have public access to Flower.

Flower has only one member, a string called bloomtime. 
Rose has only one member, a string called fragrance.
*/

#include <iostream>
#include <string>
using namespace std;

class Flower
{
    private:
        string bloomTime;
    public:
        Flower();
        void setBloomTime(string bloomIn);
        string getBloomTime();
};

Flower::Flower()
{
    //TODO: Complete the constructor
    bloomTime = " ";
}

void Flower::setBloomTime(string bloomIn)
{
    //TODO: Complete the function
    bloomTime = bloomIn;
}

string Flower::getBloomTime()
{
    //TODO: Complete the function
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose: public Flower 
{
    private:
        string fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
};

Rose::Rose()
{
    //TODO: complete the constructor
    fragrance = " ";
}

void Rose::setFragrance(string fragIn)
{
    //TODO: Complete the function
    fragrance = fragIn;
}

string Rose::getFragrance()
{
    //TODO: Complete the function
    return fragrance;
}

