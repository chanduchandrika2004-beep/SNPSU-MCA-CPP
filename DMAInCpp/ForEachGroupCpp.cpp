#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Traditional For Loop
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // For Each Loop | Enhanced For Loop | Special For Loop
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    // Iteractor [Storage Classes] auto
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0; 
}