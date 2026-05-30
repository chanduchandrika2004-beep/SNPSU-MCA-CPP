#include<iostream>
#include<vector> 
using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5}; 
    for(int num : numbers){
        cout << num << " ";
    }    cout << endl;
    // Traditional For Loop
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }    cout << endl;
    // Initialization of vectors
    vector<int> vector1(5); // Size 5 with all zeros - 0 0 0 0 0
    for(int num : vector1){
        cout << num << " ";
    }    cout << endl;
    vector<int> vector2(5, 10); // Size 5 with all 10s - 10 10 10 10 10
    for(int num : vector2){
        cout << num << " ";
    }    cout << endl;
    // Initialization from an array
    int arr[] = {1,2,3};
    vector<int> vector3(arr, arr + 3); // vectorX(arr, arr+n); n=length
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    // Important Functions
    vector3.push_back(4); 
    vector3.push_back(5);
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    vector3.pop_back(); 
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    vector3.resize(10); // Size increases from 4 to 10 with zeroes
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    vector3.resize(15, 100); // Size increases from 4 to 10 with 100s
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    // Delete an element - erase
    vector3.erase(vector3.begin()); // Deletes the first element
    for(int num : vector3){
        cout << num << " ";
    }    cout << endl;
    // vector3.clear(); // Deletes everything
    // Swapping two vectors
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    v1.swap(v2);
    for(int num : v1){
        cout << num << " ";
    }    cout << endl;
    for(int num : v2){
        cout << num << " ";
    }    cout << endl;
    return 0;
}