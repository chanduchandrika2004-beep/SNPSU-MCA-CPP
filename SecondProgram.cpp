#include<iostream>
using namespace std;
class SNPSU{
    // Pdding = Extra bytes added by the compiler to balancing
    // Greedy Alignnment 
    double d; // 8 bytes
    int i; // 4 bytes
    short s; // 2 bytes
    char c; // 1 bytes

};
int main(){
    SNPSU obj;
    cout<< "Size of the class: "<< sizeof(obj) << " bytes" << "\n";
    return 0;
}