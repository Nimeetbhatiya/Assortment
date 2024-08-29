// Develop a program that finds all the negative elements from a given 1D array.
#include<stdio.h>
int main(){
    int i;
    int arr[10];
    for(i=0;i<5;i++){
        printf("enter number %d:",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
        if(arr[i]<0)
        {
            printf("\nNegative value : %d",arr[i]);
        }
    }


    return 0;
}