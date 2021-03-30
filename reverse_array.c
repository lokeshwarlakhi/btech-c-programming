#include<stdio.h>
#include<conio.h>

void main(){
    int arr[5]={12,23,4,5,6};

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<5/2;i++){
        int temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }

    for(int i=0;i<5;i++){
        printf("\n %d ",arr[i]);
    }
}