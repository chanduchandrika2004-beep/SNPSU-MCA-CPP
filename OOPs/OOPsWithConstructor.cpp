#include<iostream>
using namespace std;
// By default the private access modifier is applied to a class
class Employee{
    public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Company: "<<Company<<endl;
    }
    // Destructor
    ~Employee(){
        cout<<" Object Destroyed. "<<endl;

    }
};
int main(){
    // Syntax of Object Creation
    // Syntax 1
    Employee e1("Dilip", 24, "Nokia"); // Classname obj;
    e1.employeeDetails();
    // Syntax 2
    Employee e2("Chandu", 23, "Tripillar Solutions"); // Classname obj = Classname();
    e2.employeeDetails();
    // 100 objects => 100 Lines
    return 0;

}