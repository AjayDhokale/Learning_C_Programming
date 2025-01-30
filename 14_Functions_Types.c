#include<stdio.h>

// function: a piece of code to execute a particular code

// types of function
// 1) built in function / predefined function = printf, scanf;
// 2) User Defined function:
//                         1. With Return type 
//                         2. without Return type 







    // ------------------------------ Type 1 = Function Take Value and  Function Retrun value ------------------------------------------



// int sum(int num1,int num2);         // Function Declaration

// int main() 
// {
//     int num1,num2;

//     printf("Enter the value of Num1 and Num2 : ");
//     scanf("%d", &num1);
//     scanf("%d", &num2);
//     printf("\n");

//     int result = add(num1, num2);                           // Function Call
//     printf("Addition = %d\n", result);

//     return 0;

// }

// int add(int a, int b) {                                 // Function Defination
//     int ans = a + b;
//     return ans;
// }




    //--------------------------------------- Type 2 = Function Take Value and but does not return value ------------------------------- 



// void sum(int ,int );         // Function Declaration

// int main() 
// {
//     int num1,num2;

//     printf("Enter the value of Num1 and Num2 : ");
//     scanf("%d", &num1);
//     scanf("%d", &num2);
//     printf("\n");

//     add(num1, num2);                           // Function Call
    
    

//     return 0;

// }


// void add(int a, int b) {                                 // Function Defination
//     int ans = a + b;
//     printf("%d", ans);
// }




    //---------------------------- Type 3 = Function do not Take any Value and but does not return any value ------------------------------- 






// void add(void);         // Function Declaration

// int main() 
// {

//     add(11,22);                           // Function Call

//     return 0;
// }


// void add(void) {                                 // Function Defination
    
//     int a,b;

//     printf("Enter the value of Num1 and Num2 : ");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("\n");
    
//     int ans = a + b;

//     printf(" Addition: %d", ans);

// }






    //---------------------------- Type 4 = Function do not Take any Value and but return any value ------------------------------- 


// int add(void);         // Function Declaration

// int main() 
// {

//     int result = add( );                           // Function Call
//     printf(" Addition: %d", result);


//     return 0;
// }


// int add(void) {                                 // Function Defination
    
//     int a,b;

//     printf("Enter the value of Num1 and Num2 : ");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("\n");
    
//     int ans = a + b;

//     return ans;


// }




// ---------------------------------------------------------------------------------------------------------------------------------



void calculation(int a, int b){                                 // Parameterized Function
    printf("Addition: %d\n", a+b);
    printf("Substraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);

    printf("\n");
}

int main(){
    
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    calculation(a,b);
    calculation(b,c);
    calculation(c,d);
    calculation(d,a);
    
    
    return 0;

}