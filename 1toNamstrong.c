#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    int temp ;
    int fact=1;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        while (i != 0)
        {
            int temp = i % 10;
            for (int j = (temp - 1); j >= 1; j--)
            {
                temp *= j;
            }
            fact += temp;
            i = i / 10;
        }
        if (fact == i)
        {
            printf("%d", i);
        }
    }

    getch();
}