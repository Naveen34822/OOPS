#include<iostream>
using namespace std;
class Customer{  
    string name;
    int *data;

    public:
    // default constructor
    Customer(){
        name = "4";
        cout<<"Constructor is called "<<name<<endl;
    }
    // constructor
    Customer(string name){
        this->name=name;
        cout<<"Constructor is called "<<name<<endl;
    }

    // Desctructor called only one time
    ~Customer(){
        cout<<"Desctructor is called "<<name<<endl;
    }

    // constructor runs in order wise while Desctructor runs in reverse order
};
int main(){
    Customer a1("1"),a2("2"),a3("3");
    Customer *a4 = new Customer; // dynamically 

    delete a4;
}