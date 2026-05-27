#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int ** arr = new int*[n]; // Allocates only rows
    for(int i=0;i<n;i++){
        arr[i] = new int[n]; // Allocates columns for each row
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix elements are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete [] arr;
    return 0;
}