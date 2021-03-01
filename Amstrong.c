#include<stdio.h>
#include<conio.h>

void main(){
    int nm;
    int sum =0;
    int temp;

    scanf("%d",&nm);


    while (nm !=0)
    {
        temp= nm%10;
        sum += (temp*temp*temp);
        nm = nm/10;
    }
    if(nm == sum){
        printf("this is a amstrong number");
    }
    else{
        printf("this ain't no amstrong number");
    }
    // printf("%d",sum);

    getch();
    
}