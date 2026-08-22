#include<iostream>
using namespace std;
class Student{  
    private:
    string name;
    int age , rollNo;
    string grade;

    // Function getter , setter
    public:
    void setname(string s){
        if(s.size() == 0) cout<<"Invalid Name";
        name = s;
    }
     void setage(int a){
        if(age <0 || age>100) cout<<"Invalid age"<<endl;
        age = a;
    }
     void setrollNo(int r){
        rollNo = r;
    }
     void setgrade(string g){
        grade = g;
    }

    // getter 
    void getname(){
        cout<<name<<endl;
    }

    void getage(){
        cout<<age<<endl;
    }
    string get_grade(int pin){
        if(pin == 123) return grade;
        else return " ";
    }
};
int main(){

    // class is blueprint of object , it does not exist in real life 
    // object exist in real world 
    // A class has  multiple object 

    // A class does't have its size , object have its size 'cause it is a real world entity  

    Student s1;
    // s1.name = "Naveen";
    // s1.age=22;
    // s1.rollNo = 80;
    // s1.grade = "A+";

    // cout<<s1.name<<" "<<s1.age;

    s1.setname("Naveen Kalera");
    s1.setage(21);
    s1.setrollNo(80);
    s1.setgrade("A+");

    s1.getname();
    s1.getage();

    cout<<s1.get_grade(123);

}