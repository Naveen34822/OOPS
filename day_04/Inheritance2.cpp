#include<iostream>
using namespace std;
// Inheritance -> the capability of a class to derive property and characteristics from another class
class Human{
    public:
    string name ;
    int age , weight;

};
class Student : private Human{
    int roll_number , fees;
    // protected:
    // string name ;
    // int age , weight;
    public:
    void fun(string s, int a , int w){
        name = s;
        age = a;
        weight = w;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<endl;
    }
    
};
// pulic access modifier are accesable in external class 
// within class all access modifier
// public , protected in derived class
//  private class didnt inherited

// strength private > protected > public 
int main(){
    Student A;
    // A.name = "Naveen";
    // A.fees = 12;
    A.fun("Naveen" , 22, 75);
    A.display();

}