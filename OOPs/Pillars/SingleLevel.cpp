#include<iostream>
using namespace std;
// By default the private access modifier is applied to a class
class Employee{ // Parent Class // Super Class
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
};
class SoftwareDeveloper : public Employee{ // Child Class // Sub Class
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string fp1)
    : Employee(name, age, company) {
        FavProLang = fp1;
    }
    void expertise(){
        cout<< Name << "Develops apps using " << FavProLang << endl;
    }
 
};
class Lecturer : public Employee{ // Child Class // Sub Class
public:
    string Subject;
    Lecturer(string name, int age, string company, string sub)
    : Employee(name, age, company) {
        Subject = sub;
    }
    void teach(){
        cout<< Name << "teaches " << Subject << endl;
    }
 
};
int main(){
    SoftwareDeveloper s1("Dilip", 24, "Coders Arcade", "Java");
    s1.employeeDetails();
    s1.expertise();
    Lecturer l1("Ramanji", 40, "BLOOMS", "DBMS");
    l1.employeeDetails();
    l1.teach();
    return 0;

}