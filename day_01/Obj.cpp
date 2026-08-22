#include<iostream>
using namespace std;
class S{ 
    // char b;
    // char c;
    // int a;
    // it take 8 byte

    char e;
    int g;
    char f;

    // answer is not 9 its 12 'cause there is rule applicable 
    // here maximum is g -> 4 byte it must divisible by 9 -> it is not divisible 9 so just grater than 9 value 
    // which is divisible by 4 is the answer which is 12 .

    // here we follow a greedy algorithm to take minium size 
    // first write who take max size like int then char
    // char e;
    // int g;
    // char f;  it takes 12 byte but instead of this we can follow greedy alogorithm to maintain minimum size 

    // int g;
    // char e;
    // char f;  it takes only 8 byte

    // char e;
    // int g;
    // char f;
    // double z;  24 byte


    // memory allocate in this form 
    // 1 byte = multimple of 1
    // 2 byte = multiple of 2
    // 4 byte = multiple of 4
    // 8 byte = nultiple of 8
    
    
};
    // class is blueprint of object , it does not exist in real life 
    // object exist in real world 
    // A class has  multiple object 

    // A class does't have its size , object have its size 'cause it is a real world entity  

    // A empty class has its size 1 because That 1 byte doesn't represent an actual variable/data member. 
    // It's essentially there so that different objects can have different addresses.



int main(){
    S ob1;
    cout<<sizeof(ob1);
}