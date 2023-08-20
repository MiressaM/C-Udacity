#include <iostream>
#include <string>

class Student{

    private:
    std::string name;
    double gpa;
    char sex;

    public:
    //Student();
    void setName(std::string nm);
    void setGPA(double g);
    void setChar(char s);
    void printInfo();

    std::string getName();
    double getGPA();
    char getChar();


};
//Student::Student(){
   // name = "";
   // gpa = 0.0; 
  //  sex = ' ';
//}

void Student :: setName(std::string nm){
    name = nm;
}
std::string Student::getName(){
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