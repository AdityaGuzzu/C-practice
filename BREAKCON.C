//A program to demonstrate break, continue statements
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int counter;
	clrscr();
	counter=0;
	printf("Enter a: ");
	scanf("%d",&a);
	while(counter<a)
	{
		printf("\nWelcome to loop: ");
		counter++;
		if(counter==4)
		break;	     //when counter equals 4 the control goes out of the loop
		if(counter==5)
		{
			continue;//if counter equals 5, the control shifts to the initial condition
		}
		printf("Still in the loop!");
	}
	getch();
}
