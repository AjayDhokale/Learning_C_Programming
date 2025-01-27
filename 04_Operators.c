#include<stdio.h>


int main(){


    // int a= 10;
    // int ans;
    // ans= ++a;
    // ans= a++;
    // ans= --a;
    // ans= a--;
    // printf("a = %d and ans = %d",a ,ans);

    int a=1;
    int b=2;

    // int ans = a&&b;
    int ans = a-- && b++;
    printf("%d %d %d", a,b,ans);

    return 0;
}