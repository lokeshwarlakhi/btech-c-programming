// SIMPLE CALCULATOR USING SWITCH CASES
#include<stdio.h>
#include<conio.h>

void main(){
    int a,d;
    char c;
    int val;

    printf("enter the number1 ");
    scanf("%d",&a);
    printf("enter the number2 ");
    scanf("%d",&d);
    printf("which operator you want(add-'a'/subs-'s'/mult-'m'/divide-'d'");
    scanf("%s",&c);

    switch (c)
    {
    case 'a':
    case '+':
        val = a+d;
        printf("sum is %d",val);
        break;
    case 's':
    case '-':
        val = a-d;
        printf("sum is %d",val);
        break;
    case 'm':
    case '*':
        val = a*d;
        printf("sum is %d",val);
        break;
    case 'd':
    case '/':
        val = a/d;
        printf("sum is %d",val);
        break;
    
    default:
        printf("invalid operator");
        break;
    }

    getch();
}