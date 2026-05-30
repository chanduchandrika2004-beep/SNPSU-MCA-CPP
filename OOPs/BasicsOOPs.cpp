#include<iostream>
using namespace std;
// By default the private access modifier is applied to a class
class Employee{
    public:
    string Name;
    int Age;
    string Company;
};
int main(){
    // Syntax of Object Creation
    // Syntax 1
    Employee e1; // Classname obj;
    e1.Name = "Dilip";
    e1.Age = 24;
    e1.Company = "Nokia";
    // Syntax 2
    Employee e2 = Employee(); // Classname obj = Classname();
    e2.Name = "Chandu";
    e2.Age = 23;
    e2.Company = "Tripillar Solutions";
    // 100 objects => 400 Lines
    // DRY => Don't Repeat Yourself [Reduces Efficiency]
    return 0;

}