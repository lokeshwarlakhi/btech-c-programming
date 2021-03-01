#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    float a,b,c;
    float rt1,rt2;
    printf("enter the a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    rt1=(-b-sqrt(b*b-4*a*c))/2*a;
    rt2=(-b+sqrt(b*b-4*a*c))/2*a;

    printf("roots are %.2f , %.2f",rt1,rt2);

    getch();


}