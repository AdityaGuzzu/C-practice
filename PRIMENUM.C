//A program to find out if the given number is a prime number or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,counter;
	clrscr();
	printf("Enter the number: ");
	scanf("%d",&num);
	counter=0;
	for(i=1;i<num;i++)
	{
	       if(num%i == 0)
		{
			counter++;
		}
	}
	if(counter==1)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	getch();
}