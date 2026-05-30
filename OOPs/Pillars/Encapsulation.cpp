#include<iostream>
using namespace std;
class Employee{
    private: // Private access modifier for encapsulation
    string Name;
    int Age;
    string Company;
public:
    // setters => Used to assign or set attributes
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // getters => Fetch or retrieve the values of the attributes
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
};
int main(){
    Employee e1;
    e1.setName("Dilip");
    e1.setAge(22);
    e1.setCompany("HRD@SNPSU");
    cout<<e1.getName()<< "," <<e1.getAge()<< "," <<e1.getCompany()<<endl;
    return 0;
}