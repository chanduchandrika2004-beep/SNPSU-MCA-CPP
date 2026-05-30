#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start() = 0; // pure virtual function
    // It acts like an interface in java ABC
};
class Car : public Vehicle{
    public:
    void start() override{
        cout<< "Car started!" <<endl;
    }
};
int main(){
    Car c;
    c.start();
    return 0;
}