#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() {
        cout << "drawing a generic shape" << endl;
    }
};

class circle : public shape {
public:
    void draw() override {
        cout << "drawing a circle" << endl;
    }
};

class rectangle : public shape {
public:
    void draw() override {
        cout << "drawing a rectangle" << endl;
    }
};

class triangle : public shape {
public:
    void draw() override {
        cout << "drawing a triangle" << endl;
    }
};

int main() {
    shape* shapeptr;   // pointer to base class

    circle c;
    shapeptr = &c;
    shapeptr->draw();

    rectangle r;
    shapeptr = &r;
    shapeptr->draw();

    triangle t;
    shapeptr = &t;
    shapeptr->draw();

    shape s;
    shapeptr = &s;
    shapeptr->draw();

    return 0;
}
