#include<stdio.h>
int main()
{
	int n,r=0,m;
	printf("enter the value of n");
	scanf("%d",&n);
	do{
		m=n%10;
		r=r*10+m;
		n=n/10;
	}
	while(n!=0);
	printf("reversed no. is:%d",r);
return 0;
}
