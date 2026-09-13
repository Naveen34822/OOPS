// Hierarchical inheritance is an object-oriented programming pattern where multiple child classes 
// inherit from a single parent class
#include <iostream>
using namespace std;

class Animal {
public:

    void eat() {
        cout << "Animal is eating\n";
    }

    void sleep() {
        cout << "Animal is sleeping\n";
    }
};

class Dog : public Animal {
public:

    void bark() {
        cout << "Dog is barking\n";
    }
};

class Cat : public Animal {
public:

    void meow() {
        cout << "Cat is meowing\n";
    }
};

int main() {

    Dog d;

    d.eat();
    d.sleep();
    d.bark();

    Cat c;

    c.eat();
    c.sleep();
    c.meow();

    return 0;
}
