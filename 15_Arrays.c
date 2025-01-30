#include<stdio.h>


// Array: array is a linear data structure in which we can store multiple element of similar datatype in consicutive sequence.
// Array: the array is the collection of similar datatype elements
// syntax: Datatype arrayName [size];                   //Array Declaration


//     // int marks[5] = { 10,20,30,}        //   Array declaration and Partial Initialization


// int main(){

//     // int marks[10];                          //   Array Declaration


//     // marks[0]= 1;                            //   Array Initialization
//     // marks[1]= 2;                            //   Array Initialization
//     // marks[2]= 3;                            //   Array Initialization
//     // marks[3]= 4;                            //   Array Initialization

//     // marks[10] = { 10,20,30,40,50,60}        //   Array Initialization
//     //  int marks[] = { 10,20,30,40,50,60}   ;     //   Array Initialization
//     // marks[10] = {10}        //   Array Initialization
//     // int marks[10] ;        //   Array Initialization


//     // printf("%d ", marks[0] );
//     // printf("%d ", marks[1] );
//     // printf("%d ", marks[2] );


//     int marks[]  ={ 1,2,3,4,5,6,7,8,9,10};  

//     // int size = sizeof(marks)/sizeof(marks[0]);

//     // int asdf;

//     // printf("%d ", asdf);

//     for(int i=0; i < 12; i++){
//         // printf("%d ", marks[i]);
//     }

//     return 0;
// }




// int main(){

//     int n;
//     printf("Enter the size of Array: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     int mul=1;
//     int sum=0;
//     printf("Enter the %d elements of array", n);
    
//     for(int i=0; i < n; i++){

//         // arr[i] = scanf("%d", &val);
//         scanf("%d", &arr[i]);
          
//     }

//     for(int j=0; j < n; j++){
//         mul = mul * arr[j];
//         sum = sum + arr[j];
//     }

//         // printf("%d\n", mul);

//     if(mul%2 == 0){
//         printf("sum = %d",sum);
//     } else{
//         printf("mul = %d", mul);
//     }

//     return 0;
// }


void displayArray(int arr[]){
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }   
}

int main() {
    int arr[] = {1,2,3,4,5};
    displayArray(arr);
}

