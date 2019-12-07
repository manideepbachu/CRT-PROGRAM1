// armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{	
int n,r,sum=0,num,l=0;
scanf("%d",&n);
num=n;
while(n!=0)
{
l++;
n=n/10;	
}
n=num;
while(n!=0)
{
r=n%10;
	sum=sum+pow(r,l);
	n=n/10;
}
if(sum==num)
printf("armstrong number");
else
printf("not an armstrong number");
return 0;
}
