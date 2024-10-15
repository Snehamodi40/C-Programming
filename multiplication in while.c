#include<stdio.h>
int main()
{
	int n,i=1,p;
	printf("enter the value of n");
		scanf("%d",&n);
	do{
		p=n*i;
		printf("%d\n",p);
		i++;
   	}
   	while(i<=10);
return 0;
}
