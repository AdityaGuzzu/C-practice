//A program to find the transpose and addition of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	int arr1[3][3];
	int arr2[3][3];
	clrscr();
	printf("Enter the matrix one elements; ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			printf("\nEnter the element of %d row %d column element: ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	i=0;
	j=0;
	printf("Enter the matrix 2 elements: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the element of %d row %d column: ",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\nPrinting the addition of matrix 1 and matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j!=2)
			printf(" %d",arr1[i][j]+arr2[i][j]);
			else
			printf(" %d\n",arr1[i][j]+arr2[i][j]);
		}
	}
	getch();
}

