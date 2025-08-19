#include<stdio.h>

void main()
{
   int x,y,z;


   printf("enter the three sides of triangle:");
   scanf("%d %d %d", &x,&y,&z);

if(x==y&&y==z&&z==x)
    printf("triangle is equilateral");

else if(x==y||y==z||z==x)
printf("triangle is isosceles");

else
printf("triangle is scalene");








}

