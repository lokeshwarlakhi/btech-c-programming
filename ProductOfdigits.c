// FINDING PRODUCT AND SUM OF THE DIGITS OF THE GIVEN NUMBER
#include<stdio.h>
#include<conio.h>

void main(){
    int nm,mul=1,sum=0;
    int temp,TMP2;
    scanf("%d",&nm);
    TMP2= nm;
    while (nm!=0)
    {
        temp = nm%10;
        mul = temp * mul;
        nm = nm/10;
    }

    printf("multiply %d\n", mul);
    nm = TMP2;
    while (nm!=0)
    {
        temp = nm%10;
        sum  = sum + temp;
        nm = nm/10;
    }
    printf("sum %d", sum);

    getch();
    
}