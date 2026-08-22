#include<iostream>
using namespace std;
class Student{ 
    public:
        string name;
        int age, rollNo;
        string grade;
};

int main(){
    // dynamically allocation
    Student *S = new Student;
    (*S).name = "Naveen";
    (*S).age = 22;
    (*S).rollNo = 80;
    (*S).grade = "A+";

    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->rollNo<<endl;
    cout<<S->grade<<endl;

}