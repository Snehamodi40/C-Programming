#include<stdio.h>
int main()
{
	int num;
	int rev_num=0;
	printf("enter the value of n");
	scanf("%d",&num);
	do{
		rev_num=rev_num*10+num%10;
		num=num/10;
	}
	while(num>0);
	printf("reversed no. is:%d",rev_num);
return 0;
}
