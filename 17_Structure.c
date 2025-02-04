#include<stdio.h>
#include<string.h>


struct Car {
    char name[10];
    float price;
    int modelNo;

} c3;


int main() {

    struct Car c;
    struct Car c2 = {"Ford", 12345, 343244323};

    strcpy(c.name,"Mustang");
    c.price = 5000;
    c.modelNo = 1278132;


    // printf("Car Name: %s\n",c.name);
    // printf("Car Price: %.2f\n",c.price);
    // printf("Car Model No : %d\n\n",c.modelNo);

    // printf("Car Name: %s\n",c2.name);
    // printf("Car Price: %.2f\n",c2.price);
    // printf("Car Model No : %d\n\n",c2.modelNo);


    printf("Car Model No : %d\n\n",c3.modelNo);

    return 0;
}