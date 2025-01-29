#include<stdio.h>

int main() {

    // int i=1;
    // int j=0;


    // while( i<6 ) {
    //     printf("Hello World\n");
    //     i++;
    // }

    // int i=1;
    // int j=0;


    // while( i <= 10 ) {
    //     j = 2 * i;
    //     printf("2 x %d = %d\n", i, j);
    //     i++;
    // }


    // int i=10;
    // int j=0;


    // while( i >= 1 ) {
    //     j = 2 * i;
    //     printf("2 x %d = %d\n", i, j);
    //     i--;
    // }





    int n1,n2,n3, big;

    printf("Enter the value of n1\n");
    scanf("%d", &n1);
    printf("Enter the value of n2\n");
    scanf("%d", &n2);
    printf("Enter the value of n3\n");
    scanf("%d", &n3);



    if(n1 > n2) {
        if ( n1 > n3 ) {
            big = n1;
        } else {
            big = n2;
        }
    } else if (n2 > n1) {
        if (n2 > n3) {
            big = n2;
        } else {
            big = n3;
        }
    } 

    printf("\n %d is the greatest number from %d, %d, %d,", big, n1, n2, n3);


    return 0;
}