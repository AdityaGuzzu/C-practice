#include<stdio.h>
#include<conio.h>
void main()
{
	int mul(int a,int b);
	int nopara();
	clrscr();
	printf("Using function with parameters:\n");
	printf("%d\n",mul(5,8));
	printf("Using functions without parameters:\n");
	nopara();
	getch();
}
mul(num1,num2)
{
	return (num1*num2);
}
nopara()
{
	printf("10");
}