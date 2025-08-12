#include<stdio.h>
#include<conio.h>

void main()
{

int x,y,z;

printf("enter the first number");
scanf("%d",&x);

printf("enter the second number");
scanf("%d",&y);

printf("enter the third number");
scanf("%d",&z);




if(x>y&&x>z)
printf("first number is greatest ");


else if (y>x&&y>z)
printf("second no is the greatest ");

else
printf("third no is the greatest");


}
