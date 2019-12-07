// fabonocci sequence
#include<stdio.h>
int main()
{
	int n,x1=0,x2=1,i,x;
	scanf("%d",&n);
	printf("%d\n%d\n",x1,x2);
	i=1;
	do
	{
		x=x1+x2;
		printf("%d\n",x);
		x1=x2;
		x2=x;
		i++;
	}
	while(i<=n-2);
	return 0;
}
