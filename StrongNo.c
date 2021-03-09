#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int fact = 0; 
    int temp2 = n;   
    while(n!=0){
        int temp = n%10;
        for(int i=(temp-1) ; i>=1;i--){
            temp *=i;
        }
        fact += temp;
        n=n/10;
    }
    if(fact == temp2){
        printf("this is strong no.");
    }
    else{
        printf("this is not strong no.");
    }
    
getch();
    
}