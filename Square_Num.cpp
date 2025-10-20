#include <iostream> 
#include <cstdlib> 
using namespace std; 
inline int square(int x) 
{ 
    return x * x; 
} 
int main()  
{ 
    system(“color F0”); 
    cout << "Roll No: 24B11AI020" << endl; 
    int num = 10; 
    cout << "Square of " << num << " is " << square(num) << endl; 
    return 0; 
}
