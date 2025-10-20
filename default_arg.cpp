#include<iostream> 
#include<cstdlib> 
using namespace std; 
class DispDemo 
{ 
 public: 
  void display() 
  { 
       cout << "Nothing to display" << endl; 
  } 
  void display(string msg) 
  { 
       cout << "I am having something to display:" << msg << endl; 
  } 
  void display(int age) 
  { 
       cout << "Age:" <<age << endl; 
  } 
  void display(string msg,int age) 
  { 
         cout << "Hello " << msg <<" Age: " <<age << endl; 
  } 
  int display(int age, int grace) 
  { 
         return (age+grace);                                                  
  } 
  void show(int c,int a = 20,int b = 30) 
  { 
        cout << "A:" << a <<" B:" <<b  << " C:" << c<< endl; 
  } 
}; 
int main() 
{ 
       system(“color F0”); 
       cout << "Roll No: 24B11AI216" << endl; 
       DispDemo dd; 
       dd.display(40); 
       dd.display(); 
       dd.display("Welcome to C++ programming"); 
       dd.display("Lalitha",19); 
       cout << " Result:" << dd.display(20, 5) << endl; 
       //dd.show(); 
       dd.show(50); 
       dd.show(20, 30); 
       return 0; 
}
