#include<stdio.h>

void pORnot(int n){
    int prime =1;
    for(int i=2;i<(n/2);i++){
        if(n%i==0){
            printf("this is a non prime");
            prime =0;
            break;
        }
    }
    if(prime==1){
        printf("this is a prime");
    }
}

void main(){
    int n;
    scanf("%d",&n);
    pORnot(n);
}