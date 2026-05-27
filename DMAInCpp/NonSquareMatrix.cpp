#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the rows & cols of the array: "<<endl;
    cin>>n>>m;
    int ** arr = new int*[n]; // Allocates only rows
    for(int i=0;i<n;i++){
        arr[i] = new int[m]; // Allocates columns for each row
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix elements are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    delete [] arr;
    return 0;
}