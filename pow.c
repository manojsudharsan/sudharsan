#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the base and exponent:");
scanf("%d %d",&a,&b);
c=pow(a,b);
printf("\n %d^%d=%d",a,b,c);
getch();
}
