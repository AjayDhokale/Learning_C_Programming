#include<stdio.h>
#include<string.h>

// structure: structure is the collection of different datatype elements
                // it is a user defined datatype.

// Padding: it Take multiple size of highest size memory






// syntax:
//     struct person{                       //structure decalration     // -> it is decalred outside of main method
//         char name[10];
//         int age;
//         float salary;
//     };

//     struct Employee{                       //structure decalration     // -> it is decalred outside of main method
//         char name[10];
//         int age;
//         float salary;
//     } e3;


        // person size is 


        // struct person p;                            // Object Creation                  // -> it is decalred inside of main method


        // p.age = 23;                                  // initialization
        // p.salary = 40000;

        // struct person p = {30,4000.0};
        // struct person p = { age=30, salary=4000.0 };




struct person{
    char name[10];
    int age;
    int salary;
};

typedef struct {
    char name[10];
    char processor[10];
    int price;
} lap;

struct student {
    char name[10];
    int id;
    char gender[10];
};

struct pen {
    char name[10];
    int price;
};

struct temp {
    char ch;
    double h;
    double d;
};



int main() {

    // struct person p;
    // struct temp t;
    struct pen p;
    
    // strcpy(p.name,"Anu");
    // p.age = 23;
    // p.salary = 4000;
   
    // struct person p = { "ajay", 40, 2000.0 };
    // printf("%s \n", p.name);
    // printf("%d \n", p.age);
    // printf("%d", p.salary);


    
    
    // lap l = {"asus", "RYZEN 7", 80000};
    
    // printf("%s \n", l.name);
    // printf("%s \n", l.processor);
    // printf("%d \n", l.price);
    // printf("%d \n", sizeof(l));
    printf("%d \n", sizeof(p));





    return 0;
}
