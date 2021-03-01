#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
printf("enter the number a");
scanf("%d",&a);
printf("enter the number b");
scanf("%d",&b);
printf("%d \n",a);
printf("%d \n",b);

a = a+b;
b = a-b;

a = a -b;

printf("the new values are \n");
printf("%d \n",a);
printf("%d \n",b);

getch();

}