#include<stdio.h>
#include<conio.h>
void main()
{
int x;
printf("enter any number");
scanf("%d",&x);
if (x%2==0)
printf("the given number  %d is even", x);
else printf("the given number  %d is odd", x);
getch();
}