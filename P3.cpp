#include<iostream>
#include<string>
using namespace std;
// cin only reads till it encounters a space
// As soon as it gets a space, it exits => [space = null character]
int main(){
    string str;
    cout<< "Enter a string: " << endl;
    getline(cin, str); 
    cin >> str;
    cout << str;
    return 0;
}