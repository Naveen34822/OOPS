#include<iostream>
using namespace std;
// Inheritance -> the capability of a class to derive property and characteristics from another class
class Human{
    protected:
    string name ;
    int age ;

    public:
    void work(){
        cout<<"I'm working...";
    }

};

class Student : public Human{
    int roll_No , fees;
    public:
    Student(string name , int age , int roll_No , int fees){
        this->name = name;
        this->age = age;
        this->roll_No = roll_No;
        this->fees = fees;
    }
};

int main(){
    Student a1("Naveen", 22, 3080 , 2000);
    a1.work();
}