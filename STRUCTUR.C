//A program to demonstrate structures
#include<stdio.h>
#include<conio.h>
void main()
{
	struct best   //defining the structure. 'test' is called the tag
	{
	int x;                 //x and y are members of the structure
	float y;
	};
	struct best struct1;    //'struct1' is the structure variable
	clrscr();
	printf("Enter the structure information: ");
	printf("\nEnter the value of x: ");
	scanf("%d",&struct1.x);
	printf("Enter the value of y: ");
	scanf("%f",&struct1.y);
	printf("Printing the output:");
	printf("\nThe value of x is %d",struct1.x);
	printf("\nThe value of y is %f",struct1.y);
	getch();
}
