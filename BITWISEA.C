//A program to demonstrate bitwise operators. //Try to find out if a number is divisible by some exponet of two using bitwise and operator
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
scanf("%d %d",&num1,&num2);
if(num1&num2)       //bitwise and. It returns 1 if both bits are 1 else returns 0
{
	printf("ok");
}
else
{
	printf("no");
}
getch();
}

