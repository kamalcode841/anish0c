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
if(x>y && x>z)
printf("the greatest number is %d" ,x);
else if(y>x && y>z)
printf("the greatest number is %d" ,y);
else
printf("the greatest number is %d" ,z);
getch();
}