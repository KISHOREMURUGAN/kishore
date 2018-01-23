#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("Enter a number");
scanf("%d",&a);
if (a=0)
{
printf("The number is zero");
}
else if(a>1)
{
printf("The number is positive");
}
else 
{
printf("The number is negative");
}
getch();
}
