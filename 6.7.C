#include<stdio.h>
int main()
{
clrscr();
    int temp,a,b;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a:%d\nb:%d",a,b);
    return 0;
}
