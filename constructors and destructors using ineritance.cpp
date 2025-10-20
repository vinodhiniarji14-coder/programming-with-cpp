#include <iostream> 
using namespace std; 
class Base { 
public: 
    Base() { 
        cout << "Base Constructor called" << endl; 
    } 
    ~Base() { 
        cout << "Base Destructor called" << endl; 
    } 
}; 
class Derived1 : public Base { 
public: 
    Derived1() { 
        cout << "Derived1 Constructor called" << endl;
         } 
    ~Derived1() { 
        cout << "Derived1 Destructor called" << endl; 
    } 
};   
class Derived2 : public Derived1 { 
public: 
    Derived2() { 
        cout << "Derived2 Constructor called" << endl; 
    } 
    ~Derived2() { 
        cout << "Derived2 Destructor called" << endl; 
    } 
}; 
int main() { 
    cout << "24B11AI185" << endl; 
    cout << "Creating object of Derived2..." << endl; 
    Derived2 obj;  // Constructors will run in order 
    cout << "Exiting main..." << endl; 
    return 0; 
}
