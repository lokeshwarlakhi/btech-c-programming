// ROOTS OF THE QUADRATIC EQUATION 
// METHOD - 2
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
float a,b,c;
float dt,rt1,rt2;


printf("enter the a,b,c values \n");
scanf("%f%f%f",&a,&b,&c);
dt = b*b - 4*a*c;

// if(dt==0){
//     rt1 = rt2 = -b/(2*a);
//     printf("%.2f and %.2f",rt1,rt2);
// }
 if(dt>=0){
    rt1 = (-b+sqrt(dt))/2*a;
    rt2 = (-b-sqrt(dt))/2*a;
    printf("%.2f and %.2f",rt1,rt2);
    
}
else {
    printf("imaginary roots....SORRY! no root bruh");
}

getch();

}