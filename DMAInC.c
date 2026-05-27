#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int * ptr;
    // I want an array of size n
    // Use of malloc
    // Type casting [Because return type is void]
    // ptr = (int*) malloc(n * sizeof(int)); // Array of size n


    // Use of calloc
    ptr=(int*)calloc(n, sizeof(int));
    printf("Enter the %d elements of the array: \n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d array elements are: ",n);
    for(int i=0;i<n;i++){
        printf("%d ", ptr[i]);
    }


    // Reallocation of size --> realloc()
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * sizeof(int));

    printf("Enter the new elements of the array: \n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d new array elements are: ",n);
    for(int i=0;i<n;i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}