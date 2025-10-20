#include <iostream> 
#include <cstdlib> 
using namespace std; 

int fact(int n); 

int main() 
{ 
    system(“color F0”); 
    int n; 
    cout << "Roll No: 24B11AI216" << endl; 
    cout << "Enter n value: "; 
    cin >> n; 
    int result = fact(n); 
    if (result == -1) 
        cout << "Factorial is not defined" << endl; 
    else                                                                
        cout << "Factorial: " << result << endl; 
    return 0; 
} 
 
int fact(int n) 
{ 
    if (n < 0) 
        return -1; 
    else if (n == 0 || n == 1) 
        return 1;  
    else 
        return n * fact(n - 1); 
} 
