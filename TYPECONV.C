//A program to demonstrate explicit type conversion
#include<stdio.h>
#include<conio.h>
void main()
{
	int female;
	int male;
	float sex_ratio;
	clrscr();
	printf("Enter the female and male population respectively: ");
	scanf("%d %d",&female,&male);
	printf("\nThe sex ratio is %f",(float)female/male); //Explicit type conversion like this gives the right answer because the expression is evaluated as float values
	printf("\n%d",sizeof(male));    //male is still an integer
	//Now trying implicit conversion
	sex_ratio=female/male;
	printf("\n
	Sex ratio using explicit type conversion: %f ",sex_ratio); //This shows a different answer because it just converts the integer result to float
	getch();
}

