#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {

    int num1,num2, choice;

    printf("Enter the value of Num1 and Num2 : ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\n");
    printf("Enter Your Choice : \n 1. Addition \n 2. Substraction  \n 3. Multiplication \n 4. Division \n ");
    printf("Your Choice is : ");

    scanf("%d", &choice);
    printf("\n");


    for(i=1; i<=5;i++) {

            
    int result;


    switch(choice){
        case 1:
            result = add(num1, num2);
            printf("Addition = %d\n", result);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Substraction = %d\n", result);
            break;
                
        case 3: 
            result = mul(num1, num2);
            printf("Multiplication = %d\n", result);
            break;

        case 4:
            result = div(num1, num2);
            printf("Division = %d\n", result);
            break;
        
        case 5:
            
            break;


    }


    }


    
    return 0;

}

int add(int a, int b) {
    int ans = a + b;
    return ans;
}

int sub(int a, int b) {
    int ans = a - b;
    return ans;
}

int mul(int a, int b) {
    int ans = a * b;
    return ans;
}

int div(int a, int b) {
    int ans = a / b;
    return ans;
}
