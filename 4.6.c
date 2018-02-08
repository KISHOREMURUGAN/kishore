#include<stdio.h>
int main()
{
int count=0;
char a;
clrscr();
printf("\n enter string");
scanf("%s",&a);
if(a==","||a=="."||a=="$"||a=="*")
{
count++;
}
return 0;
}
