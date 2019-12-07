#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf(" %d",&n);
	// for odd i=1;i=i+2 and for even i=0;i=i+2
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf(" %d ",i);
	}
	printf(" %d ",i);
	return 0;
}
