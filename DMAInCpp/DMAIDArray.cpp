#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    // Using pointers to declare a 1D Array = new keyword
    int * arr = new int[n]; // Dynamic array of size n
    cout<<"Enter the "<<n<<"  array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The "<<n<<" array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete [] arr; 
    return 0;
}