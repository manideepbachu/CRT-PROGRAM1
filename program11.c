//find the sum of first n natural numbers
#incde<stdio.h>
int main()
{
	int n,i,sum=0;lu
	printf("enter the number");
	scanf(" %d",&n);
	// for odd i=1;i=i+2 and for even i=0;i=i+2
	for(i=1;i<=n;i++)
	{
	sum=sum+i;
	
	}
	printf(" %d ",sum);
	return 0;
}
