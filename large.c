#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter three values:\n");
scanf("\n%d\n%d\n%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\n %d is larger",a);
}
else if(b>a&&b>c)
{
printf("\n %d is larger",b);
}
else if(c>a&&c>b)
{
printf("\n %d is larger",c);
}
else
{
printf("\ngive correct values");
}
getch();
}
