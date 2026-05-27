#include<stdio.h>
int main(){
    int x = 10;
    // & -> Address  operator
    printf("Hexa-Address of x using address operator: %p\n", &x);
    printf("Base-Address of x using address operator: %x\n", &x);
    // Declare a pointer
    int * ptr = &x;
    printf("Hexa-Address of x using ptr: %p\n", ptr);
    printf("Base-Address of x using ptr: %x\n", ptr);
    // Value of x => de-referencing [Extracting the value from pointer]
    printf("Value of x using ptr: %d\n", *ptr); // i or d [int]
    int ** dptr = &ptr; // double pointer
    printf("Hexa-Address of ptr using address operator: %p\n", &ptr);
    printf("Hexa-Address of ptr using dptr: %p\n", dptr);
    printf("Value of x using dptr: %i\n", **dptr); // i or d [int]
    // Question
    printf("%d", *(&x));
    int * a, b, c; // a = pointer, b and c are normal integer data types
    return 0;
}