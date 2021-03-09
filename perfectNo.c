#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int temp = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            temp += i;
        }
    }
    if (n == temp)
    {
        printf("this is a perfect no.");
    }
    else
    {
        printf("this is not a perfect no.");
    }
    getch();
}