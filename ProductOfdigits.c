#include<stdio.h>
#include<conio.h>

void main(){
    int nm,mul=1;
    int temp;
    scanf("%d",&nm);

    while (nm!=0)
    {
        temp = nm%10;
        mul = temp * mul;
        nm = nm/10;
    }

    printf("%d", mul);

    getch();
    
}