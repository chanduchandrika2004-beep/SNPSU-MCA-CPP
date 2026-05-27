// Everthing in C++ is considered a continuous
// flow of bytes [stream]
// No format specifiers
// A namespace is a package or location where there
// prefedined functions, variables & classes
#include<iostream>
using namespace std;
namespace Dilip {
    int x = 100;
    void add(int a, int b){
        cout<<  a+b <<endl;
    }
}
    namespace Dilu {
        int x = 200;
    void add(int a, int b){
        cout<<  a+b <<endl;
    }

}
int main(){
    cout<< "SNPSU"<<endl;   
    cout<< "SNPSU"<<endl;
    cout<< "SNPSU"<<endl;
    cout<< "SNPSU"<<endl;
    // :: Scope Resolution Operator
    Dilip::add(10, 20);
    Dilu::add(100, 200);
    return 0;
}