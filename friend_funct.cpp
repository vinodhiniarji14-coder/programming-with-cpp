include<iostream> 
#include<cstdlib> 
using namespace std; 
class B; 
class A 
{ 
  private: 
  int a; 
  friend int sum(A,B); 
  /*A(int a) 
 { 
    this.a = a;   
 }*/ 
public: 
A() : a(10) { } 
}; 
class B 
{ 
  private: 
  int b; 
  friend int sum(A,B); 
  /*A(int a) 
 { 
   this.a = a;   
 }*/                                                                    
 public: 
  B() : b(20) { } 
}; 
int sum(A aobj,B bobj) 
{ 
  return(aobj.a + bobj.b); 
} 
int main() 
{ 
  system(“color F0”); 
  cout<<"24B11AI020"; 
  A aobj; 
  B bobj; 
  cout << "a value: " << sum(aobj,bobj)<<endl; 
  return 0; 
}
