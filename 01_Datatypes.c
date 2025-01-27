#include<stdio.h>
#include<limits.h>

int main(){
    // printf("Hello Techrel");


    // char ch = 65;

    // printf("%d", ch);

    // printf("%c", ch);

    // printf("", typeof(ch));

    // float f= 95;

    // printf("%f", f);
    // printf("%.f", f);


    // printf("\'Hello World\'");

    // unsigned int j = -10;

    // printf("%d",j);


    // double d = 10.33;

    // // printf("%lf",d);
    // printf("%.2lf",d);

    // int i;
    // printf("%d\n", INT_MAX);

    // printf("%d", INT_MIN);
    // printf("%d\n", CHAR_MAX);
    // printf("%d", CHAR_MIN);

    // printf("%d\n", FLOAT_MAX);
    // printf("%d\n", FLOAT_MAX);


    // int  num;

    // scanf("%d",&num);
    // printf("%d",num);

    // printf("Enter the value of Num = ");
    // scanf("%d", &num);

    // int  num;
    // double  num;
    // float  num;
    // char  num;
    // printf("%c\n", num);   /// gives Garbage value when no value initialization 
    // // printf("%d", &num);

    // char ch;
    // printf("Enter The value of ch = \n");
    // scanf("%c",&ch);
    // printf("%c\n",ch);

    // float ff;
    // printf("Enter The value of ff = \n");
    // scanf("%f",&ff);
    // printf("%f\n",ff);

    // double dd;
    // printf("Enter The value of dd = \n");
    // scanf("%lf",&dd);
    // printf("%lf\n",dd);


    int i;
    char ch;
    float var;
    double d;

    printf("Enter the values of i, var, d, ch = \n");
    scanf("%d %f %lf %c", &i, &var, &d, &ch);
    printf("%d %f %lf %c", i, var, d, ch);

    return 0;
}