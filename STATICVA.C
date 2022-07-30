//A program to demonstrate static varibles
#include<stdio.h>
#include<conio.h>
void static_var();
void main()
{
     int i;
     clrscr();
     for(i=0;i<3;i++)
     {
	printf("\n");

	static_var();
     }
     getch();
}
void static_var()
{
	static int x=0;
	x+=1;
	printf("%d",x);
}