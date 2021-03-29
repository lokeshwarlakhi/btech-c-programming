#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    int arr[n];
    int p;
    
    printf("enter the number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    scanf("%d",&p);
    for(int j=0;j<n;j++){
    
        if(arr[j]==p){

            printf("%d",j);
            break;
      
        }
        
        
    }
    getch();
}