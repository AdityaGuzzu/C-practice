//A program to demonstrate the typefdef statement
#include<stdio.h>
#include<conio.h>
void typdf(void)
{
	typedef int num;
	printf("\nWelcome to Typedef.\nNow 'int' datatype int can be replaced 'num'");
}
void main()
{
	void typdf(void);
	clrscr();

	typdf();
	getch();
}


