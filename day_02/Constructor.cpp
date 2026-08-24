#include<iostream>
using namespace std;
class Customer{  
    string name;
    int account_number;
    int balance;

    public:
    // default constructor
    Customer(){
        cout<<"Default constructor called"<<endl;
        name = "Naveen";
        account_number = 4080;
        balance = 1000;
    }

    // parametrized constructor
    // Customer(string a, int b ,int c){
    //     name = a;
    //     account_number = b;
    //     balance = c;

    // }

    Customer(string name, int account_number ,int balance){
        // when we use like this it takes value nearby its scope it takes name = name which is wrong and 
        // takes garbage value so instead of this we use this keyword 
        // name = name;
        // account_number = account_number;
        // balance = account_number;

        // this keyword store the address of object 

        this-> name = name;
        this->account_number = account_number;
        this->balance = account_number;



    }

    // constuctor overloading 
    Customer(string a , int b){
        name = a;
        account_number = b;
        balance = 50; // it also valid 
    }

    // Inline Constructor
    // inline Customer(string a , int b , int c): name(a) , account_number(b) , balance(c){

    // }

    void display(){
        cout<<name<<" "<< account_number<< " "<< balance<<endl;

    }

    // copy constructor 
    Customer(Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

};

// There is a constructor which is called and execute by itself -> default constructor.
// constructor have no return type .
// constuctor overloading -> when two or more constructor have same name but diffrenet in parametrized .
int main(){
    Customer a1 , a2("Naveen Kalera" , 22, 2000);
    Customer a3("Tannu" , 5069);
    a1.display();
    a2.display();
    a3.display();

    Customer a4(a3); // default copy 
    a4.display();

    Customer a5;
    a5 = a3;
    a5.display();
    

}