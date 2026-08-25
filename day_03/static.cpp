#include<iostream>
using namespace std;
// 1 -> static data member
// 2 -> static member function
class Customer{ 
    string name;
    int acc_number , balance;
    static int total_customer;
    static int total_balance;
    public:
    // static int total_customer;
    Customer(string name, int acc_number , int balance){
        this -> name = name;
        this -> acc_number = acc_number;
        this -> balance = balance;
        total_customer++;
        total_balance += balance;
    }

    static void accessStatic(){ //static member function
        // this function only access static variables .
        cout<<"Total number of customer "<<total_customer<<endl;
        cout<<"Total balance "<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display(){
        cout<<name <<" "<<acc_number<<" "<<balance<<" "<<total_customer<<endl;
    }
    
};
// static keyword belongs to class 
// name , acc_number , balance part of object they created only when object is created;

int Customer:: total_customer = 0;
int Customer:: total_balance = 0;


int main(){
    Customer a1("Naveen" , 3080 , 1000);
    Customer a2("Aaditi",3080,1010);
    
    a1.deposit(1000);
    a2.withdraw(10);
    Customer::accessStatic();
    a1.display();
    a2.display();


}