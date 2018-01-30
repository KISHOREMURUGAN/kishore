#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter current year");
scanf("%d",&a);
if (a/4)
printf("\n this year is leap year");
else
printf("\n this year is not a leap year");
getch();
}
