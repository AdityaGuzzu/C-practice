#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

	int *p;

	p = (int*)malloc(sizeof(int));
	*p = 20;
	clrscr();
	printf("The value at p is: %d",*p);
	free(p);
	p= (int*)malloc(sizeof(int));
	*p = 40;
	printf("\nNow, the value at p is: %d",*p);
	getch();
}


