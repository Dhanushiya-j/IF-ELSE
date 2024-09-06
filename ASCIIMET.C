#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
clrscr();
printf("enter the alphabet:");
scanf("%c",&alphabet);
if(alphabet>=65&&alphabet<=90)
{
if(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
printf("it is a alphabet\n UPPERCASE\n vowels\n");
else
printf("it is a alphabet\n UPPERCASE \n consonants \n");
}
else if(alphabet>=97&&alphabet<=122)
{
if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
printf("it is alphabet\n lowercase\n vowels\n");
else
printf("it is alphabet\n lowercase\n consonants\n");
}
else
printf("invalid");
getch();
}