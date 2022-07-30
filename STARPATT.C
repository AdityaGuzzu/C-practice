//A program to print right angle triangle stars
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	printf("Enter the number of rows you want: ");
	scanf("%d",&i);
	j=1;
	for(j=0;j<i;j++)
	{
		for(k=0;k<=j;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}