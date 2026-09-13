// The Diamond Problem occurs in multiple inheritance when a class inherits from two classes that both inherit 
// from the same base class. This creates two inheritance paths to the same base class, which can cause duplicate 
// copies of the base class and ambiguity when accessing its members.

// Structure
//         A
//        / \
//       B   C
//        \ /
//         D

// Here:

// B inherits from A
// C inherits from A
// D inherits from both B and C

// Therefore, D can reach A through two paths:

// D → B → A
// D → C → A
#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {

    D obj;

    cout << obj.B::x << endl;
    cout << obj.C::x << endl;

    return 0;
}
// structure 
        //      A
        //     / \
        //    B   C
        //     \ /
        //      D

// But internally, D has:

// D
// ├── B
// │   └── A  ← copy 1
// │
// └── C
//     └── A  ← copy 2