#include<stack>
#include<iostream>
using namespace std;
void printStackElements(stack<int> s){
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    cout<< endl;
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<< "Top of stack: " << s.top() <<endl; 
    cout<< "Size of the stack: " << s.size() <<endl; 
    cout<< s.empty() <<endl; // 0 if empty or else 1
    printStackElements(s);
    return 0;
}