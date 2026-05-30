#include<iostream>
#include<list> // Doubly Linked List
using namespace std;
int main(){
    list<int> lst1; // Default constructor
    list<int> lst2(3, 10); // Parameterized constructor 
    list<int> lst3(lst2); // Copy constructor - Copies lst2 into lst3
    lst1.push_back(10); // Insert at end
    lst1.push_back(20); // Insert at beginning [20 10]
    lst1.insert(++lst1.begin(), 15); // [20 15 10]
    for(int x : lst1){
        cout<< x << " ";
    }
    cout<< endl;
    // Store front & back
    int front = lst1.front(); 
    int back = lst1.back();
    // Removing front & back elements
    //lst1.pop_front(); 
    // lst1.pop_back();
    // Traversals
    for(list<int>::iterator it = lst1.begin(); it != lst1.end(); ++it){
        cout<< *it << " ";
    }
    cout<< endl;
    for(auto it = lst1.begin(); it != lst1.end(); ++it){
        cout<< *it << " ";
    }
    cout<< endl;
    // Backward Traversal 
    for (auto it = lst1.rbegin(); it != lst1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}