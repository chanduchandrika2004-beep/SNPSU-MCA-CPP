#include<iostream>
#include<set> // To store unique elements [Non-duplicates]

using namespace std;

int main(){
    set<int> uniques; // [Automatically removes duplicates]
    // By default, a set sorts data in ascending order [sorted]
    uniques.insert(1);
    uniques.insert(11);
    uniques.insert(1);
    uniques.insert(21);
    uniques.insert(1);
    uniques.insert(11);
    uniques.insert(41);

    for(int x : uniques){
        cout << x << " ";
    }
    cout << endl;
    // Search for an element in a STL set container
    int searchElement = 410;
    auto it = uniques.find(searchElement);
    // If it finds the element it will store the value,
    // or else, it will reach the end of the set [null]
    if(it != uniques.end()){
        cout << searchElement << " Found!" << endl;
    } else {
        cout << searchElement << " Not Found!" << endl;
    }
    // Remove an element
    uniques.erase(41);
    for(int x : uniques){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}