#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int i,j,temp;

    for (int k = 0; k < n; k++)
    {
        scanf("%d", &ar[k]);
    }

    for(i =0;i<n;i++){
        for(j =0;j<n;j++){
            if (ar[j] > ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", ar[k]);
    }
    getch();
}