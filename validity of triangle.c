#include<stdio.h>

void main()
{
   float x,y,z;

   printf("enter the three sides of triangle:");
   scanf("%f %f %f", &x,&y,&z);

   if(x+y>z && y+z>x && z+x>y)
     printf("triangle is valid");
   else
     printf("triangle is  invalid");






}
