// FINDING THE POWER OF THE GIVEN NO. TO THE GIVEN NO.
#include<stdio.h>
#include<conio.h>

void main(){
    int n,p;
    // int power;
    printf("enter the no.");
    scanf("%d",&n);
    printf("enter the power ");
    scanf("%d",&p);
    

    for(int i=2;i<=p;i++){
        n*=n;
    }

    printf("the power is \n %d",n);

}