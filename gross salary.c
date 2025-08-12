
#include<stdio.h>
#include<conio.h>

void main()
{

float x,y,z;

printf("enter the gross salary");
scanf("%f",&x);

if(x>10000)

    printf("Net salary = %f",x+0.07*x);


else if( x>5000&&x<=10000)

    printf("Net salary = %f", x+0.05*x);

    else

    printf("Net salary =%f",x);

}
