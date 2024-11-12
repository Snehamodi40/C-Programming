#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of number");
	scanf("%d",&a);
	int c=sum(a);
	printf("%d",c);
	
}
int sum(int a)
{
	if(a==0)
	{
		return 1;
	}
	else if (a==1)
	{
		return 1;
	}
	else 
	{
		return a+sum(a-1);
	}
	
}
