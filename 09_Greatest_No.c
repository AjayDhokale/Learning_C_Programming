#include<stdio.h>
int main() 
{
    // int count;

    // printf("Enter the Count = ");
    // scanf("%d", &count);

    // if(count <= 10000)
    // {
    //     printf("Relese Lockdown");
    // }
    // else {
    //     if( count > 10000 && count < 15000 ){
    //         printf("partial");
    //     }else {
    //         printf("Continue");
    //     }
    // }


    int n1,n2,n3;

    printf("Enter the values of n1, n2, n3 = ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>0 && n2>0 && n3>0) {
        
        if( n1 > n2 )
        {
            printf("\n n1=%d is greatest from n1=%d, n2=%d, n3=%d \n", n1,n1,n2,n3);
        }
        else if( n1 > n3)
        {
            printf("\n n1=%d is greatest from n1=%d, n2=%d, n3=%d \n", n1,n1,n2,n3);
        }
        else if(n2 > n1 )
        {
            printf("\n n2=%d is greatest from n1=%d, n2=%d, n3=%d \n", n2,n1,n2,n3);
        }
        else if(n2 > n3)
        {
            printf("\n n2=%d is greatest from n1=%d, n2=%d, n3=%d \n", n2,n1,n2,n3);
        }
        else if(n3 > n1 )
        {
            printf("\n n3=%d is greatest from n1=%d, n2=%d, n3=%d \n", n3,n1,n2,n3);
        }
        else if(n3 > n2)
        {
            printf("\n n3=%d is greatest from n1=%d, n2=%d, n3=%d \n", n3,n1,n2,n3);
        }

    } else {
        printf("Please enter the values greater than 0");
    }
   


    // if(n1 > n2 && n1 > n3){
    //     printf("\n n1=%d is greatest from n1=%d, n2=%d, n3=%d \n", n1,n1,n2,n3);
    // }
    // else if(n2 > n1 && n2 > n3){
    //     printf("\n n2=%d is greatest from n1=%d, n2=%d, n3=%d \n", n2,n1,n2,n3);
    // } 
    // else if (n3 > n1 && n3 > n2) {
    //     printf("\n n3=%d is greatest from n1=%d, n2=%d, n3=%d \n", n3,n1,n2,n3);
    // } 

    return 0;
}