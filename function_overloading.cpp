#include<iostream> 
#include<cstdlib> 
using namespace std; 
class DispDemo 
{ 
    public: 
    void display() 
    { 
        cout<<"Nothing to say"<<endl; 
    } 
    void display(string msg) 
    { 
        cout<<"I have something to say :"<<msg<<endl; 
    } 
    void display(int age) 
    { 
        cout<<"Age: "<<age<<endl; 
    } 
    void display(string msg,int age) 
    { 
        cout<<"Hi "<<msg<<endl; 
        cout<<"Age :"<<age<<endl; 
    }                                                      
    int display(int age, int grace) 
    { 
        return (age+grace); 
    } 
};     
int main() 
{ 
    system("color F0"); 
    cout << "Roll No: 24B11AI216" << endl; 
    DispDemo dd; 
    dd.display(30); 
    dd.display(); 
    dd.display("Welcome to c++ programming"); 
    dd.display("Vinodhini",20); 
    cout<<"result:"<<dd.display(19,1); 
    return 0; 
}
