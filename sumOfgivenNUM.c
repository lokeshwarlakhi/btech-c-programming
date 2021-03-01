// FINDINNG THE SUM OF THE GIVEN NO.S USING ARRAYS
#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    int arr[n];
    printf("enter the no. ");
    scanf("%d",&n);
 
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    printf("%d ",sum);

    getch();
}