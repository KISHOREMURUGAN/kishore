#include <stdio.h>
int main() 
{
	int n,r,l,i;
	scanf("%d",&n);
	scanf("%d %d",&l,&r);
	for(i=l;i<r;i++)
	{
	    if(n>=l&&n<=r)
	    {
	     printf("yes..%d is between %d and %d",n,l,r);
	     break;
	    }
	}
	  if(!(n>=l&&n<=r))
	   {
	   printf("it is not");
	   }
	return 0;
}
