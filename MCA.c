#include<stdio.h>
#include<stdbool.h> // Used to declare boolean in C
enum Boolean {
    FALSE, TRUE, A, B, C=100, D, E
};
int main(){
    printf("SNPSU-MCA");
    bool status = false;
    printf("\n%d", status); 
    enum Boolean b = B;
    printf("\n%d", b);
    // llu - unsigned long long or zu - binary unsigned
    printf("\nThe size of the enum b is: %zu bytes\n", sizeof(b));
    return 0;
}