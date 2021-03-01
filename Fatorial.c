// FINDING THE FACTORIAL OF THE GIVEN NO.
#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("enter the no. ");
    scanf("%d",&n);

    for(int i=n-1;i>=1;i--){
        n*=i;
    }
    printf("factorial is %d",n);
}