#include <iostream>  
using namespace std;  
class Grandparent {  
public:  
void heritage() {  
cout << "This is Grandparent heritage" << endl;  
}  
};  
class Parent : public Grandparent {  
public:  
void property() {                                                                         
cout << "This is Parent property" << endl;  
}  
};  
class Child : public Parent {  
public:  
void own() {  
cout << "This is Child's own feature"<<endl; 
}  
};  
int main() {  
    cout<<"24B11AI185"<<endl; 
    Child obj;  
    obj.heritage();  
    obj.property(); 
    obj.own();       
    return 0;  
}
