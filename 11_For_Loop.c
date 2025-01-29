#include<stdio.h>

int main() {

    // --------------------------------------------- For Loop -------------------------------

    // int i = 0;
    
    // for( ; i<5 ;) {
    //     i++;
    //     printf("%d\n", i);
    // }

    // for(int  i=0, j=1 ; i<=5; i++) {
        
    //     printf("%d\n", i);
    //     printf("%d\n", j);
    // }

    // for(int i=0, j=1 ; i<=5, j<=3; i++, j++) {
        
    //     printf("%d\n", i);
    //     printf("%d\n", j);
    // }

    // 0  1
    // 1  2
    // 2  3
    // ( i<=5, j<=3 ) right most condition will be checked only


    int i,j, num;

    printf("Enter the Number = ");
    scanf("%d", &num);

    for (i=1; i<=10; i++) {
        j = num * i;
        printf("%d x %d = %d\n",num, i, j);    
    }


    return 0;
}