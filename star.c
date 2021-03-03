#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 0; i <= 7; i++)
    {
        if (i == 1 || i == 7)
        {
            for (int j = 1; j <= 16; j++)
            {
                printf("* ");
            }
        }
        if (i == 2)
        {
            for (int j = 0; j <= 16; j++)
            {
                if (j == 0 || j == 14)
                {
                    printf("* ");
                }
                if ((j >=1 && j <=6)||j==8||(j>=10 && j<=12))
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        if (i == 3)
        {
            for (int j = 0; j <= 16; j++)
            {
                if (j == 0 || j == 14)
                {
                    printf("* ");
                }
                if (j ==1 || j ==5||j==7||j==9 || j==10 || j==12)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        if (i == 4)
        {
            for (int j = 0; j <= 16; j++)
            {
                if (j == 0 || j == 14)
                {
                    printf("* ");
                }
                if ((j >=1 && j <=3)||j==5||j==7 || j==9 || j==10 || j==11)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        if (i == 5)
        {
            for (int j = 0; j <= 16; j++)
            {
                if (j == 0 || j == 14)
                {
                    printf("* ");
                }
                if (j ==3 || j ==5||(j>=7&&j<=10))
                {
                    printf("* ");
                }
                else if(j==11){
                    printf(" ");
                }
                else if(j==12){
                    printf("*");
                }
                else if(j==13){
                    printf("    ");
                }
                else{
                    printf("  ");
                }
            }
        }
        if (i == 6)
        {
            for (int j = 0; j <= 16; j++)
            {
                if (j == 0 || j == 14)
                {
                    printf("* ");
                }
                if ((j >=1 && j <=3)||j==5||j==7||j==9 || j==10 || j==12)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }

        printf("\n");
    }
    getch();
}