#include <iostream> 
#include <string> 
using namespace std; 
 
class person 
{ 
protected: 
    string name; 
 
public: 
    void setName(string n) 
    { 
        name = n; 
    } 
 
    void displayPerson() 
    { 
        cout << "Name: " << name << endl; 
    } 
}; 
 
class student : virtual public person 
{
	protected: 
    string course; 
 
public: 
    void setcourse(string c) 
    { 
        course = c; 
    } 
 
    void displayPerson() 
    { 
        cout << "Course: " << course << endl; 
    } 
}; 
 
class Employee : virtual public person 
{ 
protected: 
    string company; 
 
public: 
    void setcompany(string c) 
    { 
        company = c; 
    } 
 
    void displayPerson() 
    { 
        cout << "Company: " << company << endl; 
    } 
}; 
 
class Workingstudent : public student, public Employee
{ 
public: 
    void displayInfo() 
    { 
        person::displayPerson(); 
        student::displayPerson(); 
        Employee::displayPerson(); 
    } 
}; 
 
int main() 
{ 
 cout<<"24B11AI020"<<endl; 
    Workingstudent ws; 
    ws.setName("Vinodhini Arji"); 
    ws.setcourse("C++"); 
    ws.setcompany("ADITYA"); 
 
    ws.displayInfo(); 
    return 0; 
} 
