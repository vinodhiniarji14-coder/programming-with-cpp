#include <iostream> 
#include <cstdlib> 
using namespace std; 
// Global variable 
int b = 450; 
// Namespace declarations 
namespace N1  
{ 
    int a = 600; 
} 
namespace N2  
{ 
    int a = 10; 
} 
// Function to demonstrate local, global, and namespace scope 
void fun() 
{ 
    int a = 10;  // Local variable inside fun 
    cout << "Fun A : " << a << " " << ::b << endl;  // local a, global b 
} 
 
int main()  
{ 
    system(“color F0”); 
    // Display Roll Number in output 
    cout << "Roll No: 24B11AI216" << endl;     
    { 
        int a = 10;  // Inner block variable 
        cout << "Inner A : " << a << endl; 
    } 
 
    cout << "Outer B : " << b << endl; 
 
    fun();  // Call to function fun() 
 
    // Using fully qualified names 
    cout << "Name space 1 : " << N1::a << endl; 
    cout << "Name space 2 : " << N2::a << endl; 
 
    return 0; 
} 
