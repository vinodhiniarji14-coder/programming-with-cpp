#include <iostream> 
#include <cstdlib> 
using namespace std; 
// Function to swap two values using references 
void swapValues(int &first, int &second) 
{ 
    int temp = first; 
    first = second; 
    second = temp; 
} 
                                                                                                  
int main()  
{ 
    system(“color F0”); 
    cout << "Roll No: 24B11AI216" << endl; 
    int a, b; 
    cout << "Enter two numbers (a and b): "; 
    cin >> a >> b; 
    cout << "\nBefore Swapping:\n"; 
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    swapValues(a, b);  // Swapping the values 
    cout << "\nAfter Swapping:\n"; 
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    return 0; 
} 
