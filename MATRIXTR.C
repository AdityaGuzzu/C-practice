/*A program to find the trasnpose of a matrix*/
#include<stdio.h>
void main()
{
int matrix[3][3],transmat[3][3],counter,i,j;
clrscr();

	/*First let the user input the elements*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the row %d and column %d element ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
printf("The given  matrix is:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(j!=2)
		{
		printf("%d ",matrix[i][j]);
		}
		else
		{
		printf("%d\n",matrix[i][j]);
		}
	}
}


printf("The transpose of the input matrix is:\n");
for(i=0;i<3;i++)
{
	    for(j=0;j<3;j++)
	    {
		transmat[j][i]=matrix[i][j];
	    }
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(j!=2)
		{
		printf("%d ",transmat[i][j]);
		}
		else
		{
		printf("%d\n",transmat[i][j]);
		}
	}
}
getch();
}






