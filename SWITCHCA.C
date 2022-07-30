//A program to demonstrate switch case statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter a number between 1 and 5: ");
	scanf("%d",&num);
	switch(num)    //no semicolon in the end
	{
		case 1:
			printf("\nThe number is 1.");
			break;
		case 2:
			printf("\nThe number is 2.");
			break;
		case 3:
			printf("\nThe number is 3.");
			break;
		case 4:
			printf("\nThe number is 4.");
			break;
		case 5:
			printf("\nThe number is 5.");
			break;
		default:
			printf("\nThe number is not in the range 1 to 5");
			break;
	}
	getch();
}




