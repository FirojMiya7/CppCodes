#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called." << endl;
    }

    virtual ~Base() {  // virtual destructor
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called." << endl;
    }

    ~Derived() {
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    //This virtual destructors are only meaningful when using dynamic memory allocation and base class pointers or references...

    Base* ptr = new Derived();  // base pointer to derived object..

    delete ptr;  // deletes both Derived and Base objects properly..

    return 0;
}
