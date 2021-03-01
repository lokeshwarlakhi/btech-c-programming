// FINDING WEATHER THE GIVEN NO. IS PRIME OR NOT
#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>

void main(){
    int n;
    int prm = 0;

    scanf("%d", &n);

    if(n == 2 ){
        printf("this is prime");
        getch(); //exit(0);
    }
    else if(n ==1){
        printf("this is nor a prime nor composite");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            prm = 1;
            printf("this is a non-prime");
            break;
        }
        
    }
    if(prm==0){
        printf("this is prime");
    }


    getch();
}