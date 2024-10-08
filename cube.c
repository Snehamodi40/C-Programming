#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		c=i*i*i;
		printf(" ");
		printf("%d\n",c);
	}
	
	return 0;
}
