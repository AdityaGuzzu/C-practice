//A program to demonstrate calloc
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int i;
	int *ptr;
	clrscr();
	printf("Enter the number of elements you want: ");
	scanf("%d",&n);
	ptr = (int *)calloc(n,30);
	for(i=0;i<n;i++)
	{
		scanf("\n%u",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("The address of ptr[%d] is %u",i,&ptr[i]);
	}


	getch();
}

