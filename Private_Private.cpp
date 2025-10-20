#include <iostream> 
#include <string> 
#include <cstdlib> 
class Student { 
private: 
    std::string name; 
    int age; 
 
public: 
    void setDetails(const std::string& studentName, int studentAge) 
 { 
        name = studentName; 
        age = studentAge; 
    } 
    void displayDetails() const  
   { 
        std::cout << "Roll No: 24B11AI216" << std::endl;                                                         
        std::cout << "Student Name: " << name << std::endl; 
        std::cout << "Student Age: " << age << std::endl; 
    } 
}; 
int main()  
{ 
    system(“color F0”); 
    Student student; 
    student.setDetails("Lalitha", 19); 
    student.displayDetails(); 
    return 0; 
}
