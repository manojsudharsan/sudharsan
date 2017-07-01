#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,i,n;
clrscr();
printf("\n enter the range of series:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a+i;
}
printf("\n sum of natural numbers are:%d",a);
getch();
}
