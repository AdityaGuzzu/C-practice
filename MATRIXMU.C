#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix1[3][3],matrix2[3][3],mul[3],i,j,sum,counter;
	clrscr();
	sum=0;
	counter=0;
	printf("Enter the elements of matrix1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter the elements of matrix2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("Printing the multiplication of matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=(matrix1[i][j]*matrix2[j][i]);
		}
		printf(" %d",sum);
		sum=0;
	}
	getch();
}
