#include <iostream>  
using namespace std;  
class A {  
public:  
void showA() {  
cout << "Class A feature" << endl;  
}  
};  
class B : public A {  
public: 
void showB() {  
cout << "Class B feature" << endl;  
}  
};  
class C : public A {  
public:  
void showC() {  
cout << "Class C feature" << endl;  
}                                                                                                    
};  
class D : public B, public C {  
public:  
void showD() {  
    cout << "Class D feature" << endl;  
}  
};  
int main() {  
    cout<<"24B11AI185"<<endl; 
    D obj;  
    obj.showB();  
    obj.showC();  
    obj.showD();  
    return 0;  
}
