#include<stdio.h>
#include<conio.h>

void main(){
    int r,c;
    printf("enter the rows and columns");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int crr[r][c];
    // int scc[r][c];
    printf("enter the first martix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the no. %d %d: ",i+1,j+1);   
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the second martix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the no. %d %d: ",i+1,j+1);   
            scanf("%d",&crr[i][j]);
        }
    }

    for(int i =0 ;i<r;i++){
        for(int j =0;j<c;j++){
            crr[i][j]=arr[i][j]+crr[i][j];
        }
    }
    for(int i =0 ;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }

}