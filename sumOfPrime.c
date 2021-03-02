// SUM OF THE PRIMES TILL GIVEN 'n' FROM 1
// ps : still have some bluders...gonna update a bit//
#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    int sum = 0;
    int prm = 0;

    printf("enter the number ");
    scanf("%d", &n);
    // int i,j;
    for (int i = 2; i <= n; i++)
    {
        prm = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prm = 1;
                break;
            }
        }
        if (prm == 0)
        {
            // printf("%d ",i);
            sum += i;
        }
        // prm=1;
    }

    printf("%d", sum);

    getch();
}