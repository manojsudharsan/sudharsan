#include<stdio.h>
#include<conio.h>
void main()
{
int n,ri=0,r,o;
clrscr();
printf("\n enter a integer:");
scanf("%d",&n);
o=n;
while(n!=0)
{
r=n%10;
ri=ri*10+r;
n=n/10;
}
if(o==ri)
{
printf("\n%d is a palindrome,o);
}
else
{
printf("\n %d is not a palindrome,o);
}
getch();
}
