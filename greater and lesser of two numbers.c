#include<stdio.h>
#include<conio.h>

void main()
{

int x,y;

printf("enter the first number");
scanf("%d",&x);

printf("enter the second number");
scanf("%d",&y);

if(x>y)
printf("first number is greater than the second number ");


else if (x==y)
printf("both numbers are equal");

else
printf("second number is greater than the first number");


}
