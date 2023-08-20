#include <iostream>
#include <string>
using namespace std;

class Student{

    private:
    string name;
    double gpa;
    char sex;

    public:
    Student();
    Student(string nm, double g, char s);
    void setName(string nm);
    void setGPA(double g);
    void setChar(char s);
    void printInfo();

    string getName();
    double getGPA();
    char getChar();


};
Student::Student(){
    name = " ";
    gpa = 0.0; 
    sex = ' ';
}
Student::Student(string nm, double g, char s){
    name = nm;
    gpa = g; 
    sex = s;
}

void Student :: setName(string nm){
    name = nm;
}
string Student::getName(){
    return name;
}

void Student :: setGPA(double g){
    gpa = g;
}
double Student::getGPA(){
    return gpa;
}

void Student :: setChar(char s ){
    sex = s;
}
char Student::getChar(){
    return sex;
}

void Student::printInfo(){
    std::cout<<name<<" , "<<gpa<<" , "<<sex<<" "<<'\n';
}