#include<stdio.h>
#include<conio.h>
void main()
{
int i,m,n;
printf("enter any number");
scanf("%d",&n);
for(i=1;
i<=10;
i+=1)
{
m=n*i;
printf("%d*%d=%d \n", n,i,m);
}
getch();
}