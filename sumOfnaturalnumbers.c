// FINDING THE SUM OF NATURAL NO.S UPTO GIVEN EXTENT
#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("enter the no. ");
    scanf("%d",&n);

    int i =1;
    int sum =0;
    while(i<=n){

        sum += i;
        i++; 
    } 
    printf("%d",sum);

    getch();
}