#include<iostream>
using namespace std;
// Inheritance -> the capability of a class to derive property and characteristics from another class
class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){
        a =10;
        b= 20;
        c= 30;
    }
};
// pulic access modifier are accesable in external class 
// within class all access modifier
// public , protected in derived class
//  private class didnt inherited

// strength private > protected > public 
int main(){
    Human Naveen;

    // Naveen.a =10;
    Naveen.fun();

}