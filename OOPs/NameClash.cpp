#include<iostream>
using namespace std;
class Employee{
    public:
    // Instaance Vars -> This pointer [Used to avoid Ambiguity [Confusion]]
    // Fallback Mechanism -> The complier assigns default values to the data types
    // String = null, int = 0, float = 0.0, char = null, bool = false
    string Name;
    int Age;
    string Company;
    Employee(string Name, int Age, string Company){
        this->Name = Name;
        this->Age = Age;
        this->Company = Company;
    }
    void employeeDetails(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Company: "<<Company<<endl;
    }
};
int main(){
    Employee e1("Dilip", 24, "Nokia");
    e1.employeeDetails();
    return 0;
    
}