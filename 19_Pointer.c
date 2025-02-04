#include<stdio.h>

// Pointer: The pointer is the variable that stores the memory address of another Variable.
//         * is used to create pointer Variable.

// Double Pointer: The Double pointer is the variable that stores the memory address of another pointer Variable.

// syntax:

//     int var = 1;
//     int *ptr;                       // pointer declaration   // Single Pointer
//     int **d_ptr;                       // pointer declaration   // Double Pointer Pointer
//     ptr= &var;                      // pointer Initialization



int main() {

    // int val=1;
    // int *ptr;
    // ptr = &val;

    // int **d_ptr;
    // d_ptr = &ptr;

    // printf("%d\n", val);        // 1

    // printf("%d\n", ptr);        // GV = 6422300
    
    // printf("%p\n", ptr);        // 0061FF1C
    
    // printf("%d\n", *ptr);       //  1
    
    // printf("%d\n", &val);       // GV = 6422300
    
    // printf("%p\n", &val);       // 0061FF1C

    // printf("%p\n", &ptr);       // 0061FF18



    // printf("------------------------------------------------\n");      
    


    // printf("%p\n", &ptr);       // 0061FF18

    // printf("%p\n", ptr);       // 0061FF1C
    
    // printf("%d\n", *ptr);       // 1
    
    // printf("%p\n", d_ptr);       // 0061FF18
    
    // printf("%p\n", *d_ptr);       // 0061FF1C
    
    // printf("%d\n", **d_ptr);       // 1
    
    // printf("%p\n", &d_ptr);       // 0061FF14


    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int *a_ptr = arr;

    printf("%d\n", *arr);               // 10
    printf("%d\n", *(a_ptr+5));       // 60

    // printf("%p\n", &arr);       // 0061FEF8
    

    

    // int (*a_ptr2)[10] = &arr;
    // printf("%p\n", a_ptr2);       // 0061FF20
    // printf("%p\n", &a_ptr2);       // 0061FEF4


    //                  


    return 0;
}