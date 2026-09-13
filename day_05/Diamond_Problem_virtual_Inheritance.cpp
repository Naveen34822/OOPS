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

    void show() {
        cout << "A::show()" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {

    D obj;

    cout << obj.x << endl;   // ✅
    obj.show();              // ✅

    return 0;
}
// Now the structure is:

//              A
//             / \
//            B   C
//             \ /
//              D

// But B and C share one A:

// D
// ├── B ─────┐
// │          │
// └── C ─────┤
//            ↓
//            A  ← only ONE copy

// The only important difference
// Without virtual
// class B : public A {};
// class C : public A {};

// Gives:

// D
// ├── B → A #1
// └── C → A #2
// With virtual
// class B : virtual public A {};
// class C : virtual public A {};

// Gives:

// D
// ├── B ──┐
// └── C ──┤
//         ↓
//         A #1