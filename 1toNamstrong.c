#include<stdio.h>  
#include<conio.h>
  
void main()  
{  
    int num, count = 1, rem, sum,n;
    scanf("%d",&n);  
  
    while(count <= n)  
    {  
        num = count;  
        sum = 0;  
  
        while(num != 0)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d \n", count);  
        }  
  
        count++;  
    }  
  
     getch();  
} 
