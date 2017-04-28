#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,m=30,n=40;
printf("print odd number");
for(num=m;num<=n;num++)
{
if(num%2==1)
{
printf("%d",num);
}
}
getch();
}
