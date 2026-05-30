#include<iostream>
#include<forward_list> // Singly Linked List
using namespace std;
int main(){
    forward_list<int> flist = {10, 20, 30}; // 10->20->30->null
    // Adding elements at the beginning of the list
    flist.push_front(5);
    flist.push_front(0);    
    // Traversal 1: Using for each loop or enhanced for loop
    for(int x : flist){
        cout<< x << "->";
    }
    cout<< "null" <<endl;
    // Traversal 2: iterator -> auto keyword [Pointer]
    // begin() & end() are nit values, they are pointers
    for(auto it = flist.begin(); it != flist.end(); ++it){
        cout<< *it << " "; // We need to perform de-referencing
    }
    cout<< endl;
    // Replace the auto keyword with the normal data type
    // Traversal 3: Normal iterator
    for(forward_list<int>::iterator it = flist.begin(); it != flist.end(); ++it){
        cout<< *it << " "; // We need to perform de-referencing
    }
    cout<< endl;
    // Traversal 4: Use a range-based for loop [& Operator]
    for(int & it : flist){
       cout<< it << " "; 
    }
    cout<< endl;
    // Traversal 5: Just the auto keyword is enough
    // auto directly fetches the values here
    for(auto & it : flist){
       cout<< it << " "; 
    }
    cout<< endl;

    return 0;
}