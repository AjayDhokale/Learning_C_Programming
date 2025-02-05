#include<stdio.h>

int main(){
    int n,i,j;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the %d array Elements: ", n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The array Elements are : " );
    for(i=0; i<n; i++){
        printf("%d, ",arr[i]);
    }
    
            printf("\nThe Negative Elements of array are: ");
    for(j=0; j<n; j++){
        if(arr[j] < 0){
            printf("%d, ", arr[j]);
        } else {
            printf("\nThere is no Negative Elements in array ");

        }
    }

    return 0;
}

