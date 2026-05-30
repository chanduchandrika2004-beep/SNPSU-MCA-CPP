#include<iostream>
using namespace std;
class Father{
    public:
    void fatherProperty(){
        cout<< "Father's business!" <<endl;
    }
};
class Mother{
public:
    void motherProperty(){
        cout<< "Mother's plot of land!" <<endl;
    }
};
class Child : public Father, public Mother{ // Multiple Inheritance
public:
    void show(){
        cout<< "The child inherits from both the parents." <<endl;
    }
    
};
int main(){
    Child c;
    c.fatherProperty();
    c.motherProperty();
    c.show();
    return 0;
}