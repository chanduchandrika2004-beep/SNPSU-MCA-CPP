#include<iostream>
#include<queue>
using namespace std;
void printQueueElements(queue<int> q){
    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
    cout<< endl;
}
int main(){
    queue<int> q;
    // front, back, push, pop, empty, size
    q.push(1);
    q.push(21);
    q.push(15);
    q.push(10);
    cout<< "Front Element: " << q.front() <<endl; 
    cout<< "Back Element: " << q.back() <<endl; 
    cout<< q.empty() <<endl; // 0 if not empty or else 1
    cout<< "Size of queue: " << q.size() <<endl;
    printQueueElements(q);
    return 0;
}