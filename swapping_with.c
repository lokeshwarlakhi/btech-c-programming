#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2;
    printf("enter the no. ");
    scanf("%d",&num1);
    printf("enter th)e no. ");
    scanf("%d",&num2);

    int rushi;
    rushi = num1;
    num1 = num2;
    num2 = rushi;

    printf("new value of the number is %d \n",num1);
    printf("new value of the number is %d \n",num2);
}