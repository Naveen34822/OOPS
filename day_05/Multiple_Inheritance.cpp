#include<iostream>
using namespace std;
// Multiple-Inheritance -> an object-oriented programming feature where a child class inherits behaviors, 
// properties, and methods from more than one parent class
class Engineer{
    void money(){
        cout<<"Hello Money\n";
    }
    public:
    Engineer(){
        cout<<"Hello Engineer constructor"<<endl;
    }
    string specilization;

    void work(){
        cout<<"I've specilization in : "<<specilization;
    }

};
class Youtuber{
    public:
    int subscribers;

    Youtuber(){
        cout<<"Hello Youtube constructor"<<endl;
    }

    void contentcreator(){
        cout<<"I've a subscriber base of "<<subscribers;
    }
};

class CodeTeacher : public Engineer , public Youtuber{
    public:
    string name;
    CodeTeacher(){
        cout<<"Hello CodeTeacher constructor"<<endl;
    }

    CodeTeacher(string name, int subscribers ,string specilization){
        this->name=name;
        this->subscribers=subscribers;
        this->specilization=specilization;
    }

    void showcase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    }
    
};
// parent class ke constructor phle call hote hai
int main(){
    // CodeTeacher a1("Naveen", 20, "CSE");
    // a1.showcase();

    CodeTeacher a1;
}
