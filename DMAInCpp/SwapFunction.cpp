#include<iostream>
using namespace std;
void swap_numbers(int *a, int *b){
   
    int temp = *a;
    *a = *b;
    *b = temp;

}


void swap_letters(char *c, char *d){
    char temp = *c;
    *c = *d;
    *d = temp;

}
template<typename T>  // User Defined Data Type // Generics in Java
void swap_anything(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10, b = 20;
    cout<<"Before (In Main): a = "<<a<<", b = "<<b<<endl;
    swap_anything(a, b);
    cout<<"After (In Main): a = "<<a<<", b = "<<b<<endl;
    char c = 'c', d = 'd';
    cout<<"Before (In Main): c = "<<c<<", d = "<<d<<endl;
    swap_anything(c, d);
    cout<<"After (In Main): c = "<<c<<", d = "<<d<<endl;
    return 0;
}