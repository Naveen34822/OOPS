#include<iostream>
using namespace std;
// MultiLevel-Inheritance -> an object-oriented programming feature where a class inherits from another derived class, 
// forming a chain or a grandparent-parent-child hierarchy
class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }

};
class Employee : public Person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My monthly salary is: "<<salary<<endl;
    }
};

class Manager : public Employee{
    public:
    string department;
    Manager(string name ,int salary , string department){
        this->name=name;
        this->salary = salary;
        this->department=department;
    }

    void work(){
        cout<<"I'm leading the department "<<department<<endl;
    }
};
int main(){
    Manager a1("Naveen", 2000, "CSE");
    a1.work();
    a1.monthly_salary();
    a1.introduce();
}