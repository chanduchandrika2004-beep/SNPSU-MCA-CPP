#include<iostream>
using namespace std;
class Addition {
public:

    static void add(int a, int b){
        cout << a + b << endl;
    }
    // Different number of parameters
    static void add(int a, int b, int c){ 
        cout << a + b + c << endl;
    }
    static void add(float a, float b){ 
        cout << "Float Called" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){ 
        cout << "Double Called" << endl;
        cout << a + b << endl;
    }
};

int main(){
    Addition::add(1,2);
    Addition::add(1,2,3);
    Addition::add(1.1,2.3); // Double -> No need to declare any letters
    Addition::add(23.456f,45.678f); // Float -> Need to write f or F
    return 0;
}