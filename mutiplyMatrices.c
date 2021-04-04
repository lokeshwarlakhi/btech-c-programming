#include <stdio.h>

int main()

{

    int m, n, p, q, i, j, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];
    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &first[i][j]);
    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of second matrix\n");
        for (i = 0; i < p; j++)
            for (j = 0; j < q; j++)
                scanf("%d", &second[i][j]);
        for (i = 0; i < m; i++)
       {
            for (j = 0; j < q; j++)
           {
                for (k = 0; k < p; k++)
               {
                    sum = sum + first[i][k] * second[k][j];
               }
               multiply[i][j] = sum;
                sum = 0;
           }
        }
        printf("Product of entered matrices:-\n");
       for (i = 0; i < m; i++)
       {
            for (j = 0; j < q; j++)
                printf("%d\t", multiply[i][j]);
            printf("\n");
       }
   }
    return 0;
}