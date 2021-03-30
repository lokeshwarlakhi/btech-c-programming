#include<stdio.h>
#include<conio.h>

void main(){
    int arr[10]={12,34,2,3,41,243,412,123,456,76};
    int max =0;
    for(int i =0 ;i<10;i++){
        if(max<arr[i]){
            max = arr[i];

        }
    }
    printf("%d",max);
    getch();
}