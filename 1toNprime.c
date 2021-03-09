#include <stdio.h>
#include <conio.h>

void main()
{
    int n, prime;
    int temp = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime == 1)
        {
            printf("%d\n", i);
          
        }
    }
    
    getch();
}