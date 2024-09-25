#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a,b,op;
printf("enter the value of a");
 scanf("%d",&a);
 printf("enter the value of b");
 scanf("%d",&b);
 printf("enter any");
 scanf("%d",&op);
 switch (op){
case 1:
printf("%d",a+b);
break;
 case 2:
 printf("%d",a-b);
 break;
 case 3:
 printf("%d",a*b);
 break;
 case 4:
 printf("%d",a/b);
 break;
 case 5:
 printf("%d",a%b);
 break;
 default:
 printf("wrong input");
 }
 getch();
 }