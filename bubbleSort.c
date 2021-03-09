#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int ar[n];

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int lok = 1;
    int tmp;
    while (lok < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                tmp = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = tmp;
            }
        }
        lok += 1;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d", &ar[i]);
    }
    getch();
}