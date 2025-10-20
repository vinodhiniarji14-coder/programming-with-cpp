#include <iostream>
using namespace std;

class animal {
public:
    // Polymorphism using virtual function
    virtual void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

class dog : public animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class cat : public animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

class cow : public animal {
public:
    void speak() override {
        cout << "Cow moos." << endl;
    }
};

int main() {
    animal* ptr;

    dog d;
    cat c;
    cow w;
    animal a;

    ptr = &d;
    ptr->speak();   // Dog barks

    ptr = &c;
    ptr->speak();   // Cat meows

    ptr = &w;
    ptr->speak();   // Cow moos

    ptr = &a;
    ptr->speak();   // Animal makes a sound

    return 0;
}
