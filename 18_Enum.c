#include<stdio.h>
#include<string.h>

// Enum: 
//         - It is User Defined datatype
//         - use to store the Normed Intergral Sets
//         - Mostly it used int size

// enum vehicle{
//     Ontrip,
//     Offtrip,
//     servicing,
// };



// int main() {
//     enum vehicle v;
//     v=Ontrip;
//     v=servicing;
//     v=Offtrip;
//     printf("%d", v);

//     return 0;
// }


 //  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

enum days{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};


int main() {
    

    enum days d;
    d= thursday;
    

    switch(d){
        case sunday:
            printf("Today is Sunday");
            break;
        case monday:
            printf("Today is Monday");
            break;
        case tuesday:
            printf("Today is Tuesday");
            break;
        case wednesday:
            printf("Today is wednesday");
            break;
        case thursday:
            printf("Today is thursday");
            break;
        case friday:
            printf("Today is friday");
            break;
        case saturday:
            printf("Today is saturday");
            break;

    }
}