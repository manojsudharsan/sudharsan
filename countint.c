#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
printf("\n enter the integer:");
scanf("%d",&a);
while(a)
{
a=a/10;
b++;
}
printf("\n there are  %d  digits in a given number",b);
getch();
}
