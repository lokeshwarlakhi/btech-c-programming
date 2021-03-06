// A MENU DRIVEN PROGRAMM TO CALCULATE THE AREA OF THE GEOMETRICAL FIGURES
#include <stdio.h>
void main ()
{
      int choice,r,l,b,h,s;
      float area;
      printf("Input 1 for area of rectangle\n");
      printf("Input 2 for area of square\n");
      printf("Input 3 for area of triangle\n");
      printf("Input 4 for area of circle\n");
      printf("Input 5 for area of parallelogram\n");
      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1: printf("Enter length and breadth of the rectangle : ");
                  scanf("%d%d",&l,&b);
                  area=l*b;
                  printf("The area is : %f\n",area);
                  break;
                 
            case 2: printf("Enter the side of a square : ");
                 scanf("%d",&s);
                 area=s*s;
                 printf("The area is : %f\n",area);
                 break;
                  
            case 3: printf("Input the base and hight of the triangle :");
                  scanf("%d%d",&b,&h);
                  area=(0.5)*b*h;
                  printf("The area is : %f\n",area);
                  break;
            case 4: printf("Input radious of the circle : ");
                 scanf("%d",&r);
                 area=3.14*r*r;
                 printf("The area is : %f\n",area);
                 break;
            case 5: printf("Input the base and hight of the parallelogram :");
                  scanf("%d%d",&b,&h);
                  area=b*h;
                  printf("The area is : %f\n",area);
                  break;
            default: printf("invalid choice");
          }
}