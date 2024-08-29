#include <stdio.h>
int main()
{
    int i, j;
    int arr[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter number arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}