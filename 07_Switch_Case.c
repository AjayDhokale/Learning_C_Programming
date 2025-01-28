#include<stdio.h>
int main() {

  int choice;
    
    printf("Enter The Value Of Num : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: 
            printf("Case 1");
            break;
        case 2: 
            printf("Case 2");
            break;
        case 3: 
            printf("Case 3");
            break;
        case 4: 
            printf("Case 4");
            break;
        case 5: 
            printf("Case 5");
            break;
        default:
            printf("Please Enter a Choice") ;   
    }


   return 0;

}

