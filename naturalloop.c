#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,j;
clrscr();
printf("\n enter range:");
scanf("%d",&num);
for(j=0;j<=num;j++)
{
sum=sum+j;
}
printf("\n %d",sum);
}
getch();
}
