#include<stdio.h>
int main()
{
int unit,amt=200,totalamt;
printf("enter you unit : ");
scanf("%d",&unit);

if(unit<=100)
{
printf("your bill : %d",amt);
}
else if(unit>100&&unit<=300)
{
printf("your bill : %d",(amt*20/100)+amt);
}
else if(unit>300&&unit<=500)
{
printf("your bill : %d",(amt*40/100)+amt);
}
else
{
    printf("your bill:%d",(amt*60/100)+amt);
}
return 0;
}
