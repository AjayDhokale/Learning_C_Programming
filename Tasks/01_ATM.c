#include<stdio.h>
    int balance = 1000;

int deposit() {
    int amount;
    printf("Enter Amount =  ");
    scanf("%d", &amount );
    balance = balance + amount;
    printf("Your Balance: %d\n", balance); 
    return amount;
}

int withdraw(){
    int amount;
    printf("Enter Withdraw Amount =  ");
    scanf("%d", &amount );
    if(balance>amount){
        balance = balance - amount;
        printf("Amount Withdrawed Rs %d\n", amount);
        printf("Your Remaining Balance is: %d\n", balance); 
    } else {
        printf("Insufficient Balance\n"); 

    }

    return amount;
}

int main(){
    int Choice;
    
    while(1){
        
        printf("\n1. Deposit \n2. Withdraw \n3. Check Balance \n4. Exit\nEnter Your Choice No...\n  ");
        scanf("%d", &Choice);


        switch(Choice) {
            case 1: 
                    deposit();
                    break;
            case 2: 
                    withdraw();
                    break;
                    
            case 3: 
                    printf("\nYour Remaining Balance is: %d\n", balance);
                    break;

            case 4: 
                    return 0;
        }




    }



}
