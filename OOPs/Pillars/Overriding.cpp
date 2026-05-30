#include<iostream>
using namespace std;
class Father{
public:
    virtual void building(){
        cout<< "The building is a Library!" <<endl;
    }
};
class Daughter : public Father{
public:
    void building() override{ 
        cout<< "The building is a Boutique!" <<endl;
    }
};
class Son : public Father{
public:
    void building() override{ 
        cout<< "The building is a Gym!" <<endl;
    }
};
int main(){
    // The maost important use of Polymorphism is to achieve Runtime Polymorphism is to refer to a child class
    // object using a parent class Reference [Poniter]
    Father* f;
    Daughter d;
    Son s;
    f = &d;
    f->building(); 
    f = &s;
    f->building(); 
    return 0;
}

