//A program to find the transpose of a matrix of the size given by the user(not dynamic memory allocation)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int rows,columns,i,j,*ptr,counter;
	i=0;
	j=0;
	counter=0;
	clrscr();
	printf("Enter the number of rows you want: ");
	scanf("%d",&rows);
	printf("\nEnter the number of columns you want: ");
	scanf("%d",&columns);
	if(rows==columns)
	{
		ptr = (int *)calloc(rows*columns,2);
		for(i=0;i<rows && counter<rows*columns;i++)
		{
			for(j=0;j<columns;j++,counter++)
			{
				printf("Enter %d row %d column element: ",i+1,j+1);
				scanf("%d",&ptr[counter]);
			}
		}
		printf("\n");
		for(i=1;i<=rows*columns;i++)
		{
		     if(i%columns==0)
		     {
			printf(" %d\n",ptr[i]);
		     }
		     else
		     {
			printf(" %d",ptr[i]);
		     }
		}
	}
	else
	{
	printf("\nThe matrix is not symmetrical, the transpose can't be found");
	}

	getch();
}
