#include<stdio.h>
#include<conio.h>

void main(){
    int a[10]={23,34,54,6,7,232,43,4,21,13};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i =0;i<10;i++){
        printf("%d  ",a[i]);
    }

    int key,mid;
    int low = 0 , high = 9;
    key = 43;
    while (low < high){
        mid = (low + high)/2;
        if (key < a[mid]){
            high = mid;
        }
        
        else if (key > a[mid]){
            low = mid;
        }
        
        else if (key == a[mid]){
            // high = a[mid];
            printf("found-%d",mid+1);
            break;
        }
        else
            printf("not found");
        
    }
    getch();
}