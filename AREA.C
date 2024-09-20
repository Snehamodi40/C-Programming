#include<stdio.h>
#include<conio.h>
int main()
{
int a=2;
int b=3;
int r=5;
printf("area of square is %d \n", a*a);
printf("perimeter of square is %d \n",4*a);
printf("area of rectangle is %d",a*b);
printf("perimeter of rectangle is %d \n",2*(a+b));
printf("are of circle is %f \n",3.14*r*r);
printf("perimeter of circle is %f \n",2*3.14*r);
printf("area of triangle is %d \n",(a+b)/2);
getch();
}