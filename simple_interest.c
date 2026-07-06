#include<stdio.h>
#include<conio.h>
void main( )
{
float p,t,r,si;
printf("enter the value of principle");
scanf("%f",&p);
printf("enter the value of time");
scanf("%f",&t);
printf("enter the value of rate");
scanf("%f",&r);
si=p*t*r/100;
printf("the simple interest is %.0f \n", si);
getch();
}