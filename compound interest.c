#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,p,r,t,ci;
printf("the value of p is");
scanf("%f",&p);
printf("the value of rate is:");
scanf("%f",&r);
printf("the value of t is :/n");
scanf("%f",&t);
a= p*pow((1+r/100),t);
ci=a-p;
printf("ci=%f",ci);
return 0;
}
