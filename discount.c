#include<stdio.h>

void main()
{

float x;


printf("enter gross sales");
scanf ("%f",&x);


if(x>20000)
printf("net sales :%f",x-0.15*x);


else if(20000>x>10000)
printf("net sales:%f",x-0.10*x);


else
printf("net sales:%f",x-0.05*x);




}
