#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("Enter a and b value:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d%d",a,b);
getch();
}
