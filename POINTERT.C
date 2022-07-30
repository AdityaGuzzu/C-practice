//A program to demonstrate functions returning pointers
#include<stdio.h>
#include<conio.h>
void main()
{
	int greater(int,int);       //function declaration
	int (*fptr)(int,int);              //pointer declaration
	clrscr();
	fptr = greater;               //assigning the fucntion to the pointer(initialisation)
	printf("%d",(*fptr)(3,4));  //function call
	getch();
}
int greater(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
