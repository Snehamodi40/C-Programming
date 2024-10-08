#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
