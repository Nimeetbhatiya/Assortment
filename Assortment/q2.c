#include<stdio.h>
int main(){
int size,larg;

     printf("Enter a size : ");
    scanf("%d",&size);

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("enter number arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    larg=arr[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i][j] > larg){

                larg=arr[i][j];
            }
        }
    }
        printf(" the large value is %d",larg);

    return 0;
}