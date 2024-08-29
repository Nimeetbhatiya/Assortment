// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D
// array.

#include <stdio.h>
int main()
{
    int i, j, sum = 0, size;
    int row, col;

    printf("Enter a size :");
    scanf("%d", &size);

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
    
    printf("enter row number :");
    scanf("%d", &row);
    if (row >= 0 && row < size)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr[row][j]);
            sum += arr[row][j];
        }
        printf("\nsum of row  %d", sum);
    }
    else
    {
        printf("\nInvalid row number");
    }

    sum=0;
    printf("\nenter column number :");
    scanf("%d", &col);
    if (col >= 0 && col < size)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", arr[j][col]);
            sum += arr[j][col];
        }
        printf("\nsum of column %d", sum);
    }
    else
    {
        printf("\nInvalid column number");
    }
    return 0;
}