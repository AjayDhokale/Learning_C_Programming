#include<stdio.h>

int main() {


    //----------------------------------------- Arithmatic Operators --------------------------------------
    int num1, num2;

    printf("Enter the value of Num1 :\n" );
    scanf("%d", &num1 );
    printf("Enter the value of Num2 :\n" );
    scanf("%d", &num2);

    printf("  Addition of %d and %d is = %d \n", num1, num2 ,num1 + num2);
    printf("  Substraction of %d and %d is = %d \n", num1, num2 , num1 - num2);
    printf("  Multiplication of %d and %d is = %d \n", num1, num2 , num1 * num2);
    printf("  Division of %d and %d is = %d \n", num1, num2 , num1 / num2);
    printf("  Modulus of %d and %d is = %d \n", num1, num2 , num1 % num2);



    //----------------------------------------- Relational Operators --------------------------------------


    int num3, num4;

    printf("Enter the value of Num3 :\n" );
    scanf("%d", &num3 );
    printf("Enter the value of Num4 :\n" );
    scanf("%d", &num4);



    printf("  %d < %d = %d \n", num3, num4, num3 < num4);
    printf("  %d > %d = %d \n", num3, num4, num3 > num4);
    printf("  %d <= %d = %d \n", num3, num4, num3 <= num4);
    printf("  %d >= %d = %d \n", num3, num4, num3 >= num4);
    printf("  %d == %d = %d \n", num3, num4, num3 == num4);
    printf("  %d != %d = %d \n", num3, num4, num3 != num4);






    return 0;
}