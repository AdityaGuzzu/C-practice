//A program to find the greatest of three numbers using conditional statements
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3;
	clrscr();
	printf("Enter three numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf("\nThe greatest number is %d",num1);
	}
	else if (num2>num1 && num2>num3)
	{
		printf("\nThe greatest number is %d",num2);
	}
	else
	{
		printf("The greatest number is %d",num3);
	}
	getch();
}
