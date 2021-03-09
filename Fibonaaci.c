#include<stdio.h>
#include<conio.h>

void main(){
int n;
scanf("%d",&n);
int f=0,s=1;
int sum =0;

printf("%d\t%d\t",f,s);
for(int i=0;i<(n-2);i++){
    
    sum = f+s;
    f = s;
    s = sum ; 
    printf("%d\t",sum);  
}
getch();
}