#include<stdio.h>
#include<string.h>

// Uninon: 
//     - It has different Datatype Elements
//     - It shared the memory accros All its Members
//     - memory size is determained by the largest member present 
//     - It can assigned only one value at a time
//     - It is User Defined Datatype

union emp{
    char name[20];
    int age;
    int age2;
};


int main(){
    union emp e;
    e.age = 23;
    e.age2 = 55;
    strcpy(e.name,"Ajay");

    printf("  %s ", e.name);
    // printf(" %s %d ", e.name, e.age);
    
    return 0 ;
}