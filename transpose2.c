// #include<stdio.h>
// #include<conio.h>

// void main(){
//     int r,c;
//     printf("enter the number of rows and columns\n");
//     scanf("%d",&r);
//     scanf("%d",&c);

//     int arr[10][10];
//     int b[10][10];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;i<c;j++){
//             b[j][i]=arr[i][j];
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;i<c;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     getch();   
// }

// Program to Find the Transpose of a Matrix
#include <stdio.h>
#include<conio.h>
void main() {
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][]
    // printf("\nEntered matrix: \n");
    // for (i = 0; i < r; i++)
    //     for (j = 0; j < c; j++) {
    //         printf("%d  ", a[i][j]);
    //         if (j == c - 1)
    //             printf("\n");
    //     }

    // Finding the transpose of matrix a
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++){
        for (j = 0; j < r; j++) {
            printf("%d  ", transpose[i][j]);
            // if (j == r - 1)
        }
                printf("\n");}
    getch();
}