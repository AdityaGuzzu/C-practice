//A program to demonstrate external variables
#include<stdio.h>
#include<conio.h>
void main()
{
	extern int m; //declaration
	void external();  //declaring the function/
	clrscr();
     //	m = 0;
	printf("%d\n",m);
	external();      //now m = 100
	external();      //now m = 200
	printf("\n%d",m);         //since m is global, now m = 200
	getch();
}
void external()
{
	extern int m; //declaration
	m+=100;
	printf("\n%d",m);
}
int m;   //	definition:
	//	Though m has been declared earlier, using extern tells the compiler
	//	it is defined somewhere else, so its mandatory to define m
	//	outside any function.