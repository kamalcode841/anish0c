#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
printf("enter any number between 1 to 12");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("the given month is January \n");
break;
case 2:
printf("the  given month is February \n");
break;
case 3:
printf("the given month is march \n");
break;
case 4:
printf("the given month is April \n");
break;
case 5:
printf("the given month is may \n");
break;
case 6:
printf("the given month is June \n");
break;
case 7:
printf("the given month is July \n");
break;
case 8:
printf("the given month is august \n");
break;
case 9:
printf("the given month is September \n");
break;
case 10:
printf("the given month is octover \n");
break;
case 11:
printf("the given month is November \n");
break;
case 12:
printf("the given month is December");
break;
default:
printf("your input is incorrect");
}
getch();
}