#include<stdio.h>
#include<conio.h>

void main(){
    int arr[3][3]={{1,2,3},{5,6,7},{7,8,9}};
    int brr[3][3];

    for(int i =0 ;i<3;i++){
        for(int j=0;j<3;j++){
            // brr[j][i]=arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i =0 ;i<3;i++){
        for(int j=0;j<3;j++){
            brr[j][i]=arr[i][j];
        }
    }
    printf("\n\n");
    for(int i =0 ;i<3;i++){
        for(int j=0;j<3;j++){
            // brr[j][i]=arr[i][j];
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

   

    getch();


}