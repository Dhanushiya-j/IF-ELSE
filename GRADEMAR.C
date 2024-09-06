#include<stdio.h>
#include<conio.h>
void main()
{
int mark;
clrscr();
printf("enteryour mark");
scanf("%d",&mark);
if(mark>100)
printf("invalid mark");
else if(90<mark<=100)
printf("grade a");
else if(80<mark<=90)
printf("grade b");
else if(70<mark<=80)
printf("grade c");
else if(60<mark<=70)
printf("grade d");
else if(50<mark<=60)
printf("grade e");
else if(40<mark<=50)
printf("grade f");
else
printf("fail");
getch();
}