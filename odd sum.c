#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
