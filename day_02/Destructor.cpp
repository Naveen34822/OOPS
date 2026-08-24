#include<iostream>
using namespace std;
class Customer{  
    string name;
    int *data;

    public:
    // constructor
    Customer(){
        cout<<"Constructor called"<<endl;
        name = "Naveen";
        data = new int;
        *data = 100;
    }

    // Desctructor called only one time
    ~Customer(){
        delete data;
        cout<<"Desctructor is called"<<endl;
    }
};
int main(){
    Customer a1;

}