//A program to demonstrate micro substitution
#include<stdio.h>
#include<conio.h>
#define C 90*D        //This just replaces every C with 90*D
#define D 100         //This then replaces every D with 100
#define func() printf("%d",100)       //This replaces every func() with printf("%d',100)

void main()
{

	clrscr();
	printf("%d\n",C);	//Precprocesor just replaces strings.
	func();
	getch();
}



