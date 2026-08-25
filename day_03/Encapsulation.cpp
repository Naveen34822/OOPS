#include<iostream>
using namespace std;
// dont allow outside the code to directly mess with important data
class Customer{ 
    private:
    string name;
    int acc_number , balance , age;
    public:
    // static int total_customer;
    Customer(string name, int acc_number , int balance, int age){
        this -> name = name;
        this -> acc_number = acc_number;
        this -> balance = balance;
        this -> age = age;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
        else cout<<"Invalid amount"<<endl;
    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
        }
        else {
            cout<<"Invalid withdraw amount"<<endl;
        }
    }

    void updateAge(int age){
        if(age >0 && age <=100){
            this -> age = age;
            cout<<"Age updated to "<<age<<endl;
        }
        else{
            cout<<"Invalid age"<<endl;
        }
    }
    void display(){
        cout<<name <<" "<<acc_number<<" "<<balance<<" "<<age<<endl;
    }
    
};
int main(){
    Customer a1("Naveen" , 3080 , 1000 , 20);
    Customer a2("Aaditi",3080,1010 ,21);
    
    a1.deposit(-11000);
    a2.withdraw(10);

    a1.updateAge(22);
    a1.display();
    a2.display();   
}