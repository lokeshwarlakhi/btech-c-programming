#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    int p;
    
    printf("enter the number: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    scanf("%d",&p);
    int j;
    for( j=0;j<n;j++){
    
        if(arr[j]==p){

            printf("%d",j);
            // getch();
            break;
      
        }
        // printf("NO");
    }
    if(j==n){ printf("no");
    }
    getch();
}