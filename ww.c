#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter a b c values");
scanf("%d%d%d",&a,&b,&c);
if (a>b)&(a>c)
printf("\n a is big");
else if (b>a)&(b>c)
printf("\n b is big");
else
printf("\n c is big");
getch();
}
