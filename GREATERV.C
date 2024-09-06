#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
printf("enter c:\n");
scanf("%d",&c);
if(a>b&&a>c)
printf("a is greater");
else if(b>c)
printf("b is greater");
else
printf("c is greater");
getch();
}