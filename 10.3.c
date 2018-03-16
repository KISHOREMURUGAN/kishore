#include<stdio.h>
#include<conio.h>
void main()
{
    int celsius,kelvin;
    clrscr();
    printf("enter the celsius\n");
    scanf("%d",&celsius);
    kelvin=273+celsius;
    printf("kelvin=%d",kelvin);
    getch();
}
