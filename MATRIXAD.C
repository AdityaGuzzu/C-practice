#include<stdio.h>
void main()
{
int matrix1[3][3],matrix2[3][3];
int i,j,counter;
clrscr();
for(counter=0;counter<2;counter++)
{
	if(counter==0)
	{
		printf("Enter the elements of first matrix\n");
	}
	else
	{
		printf("Enter the elements of second matrix\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the %d row %d column element ",i+1,j+1);
			if(counter==0)
			{
				scanf("%d",&matrix1[i][j]);
			}
			else
			{
				 scanf("%d",&matrix2[i][j]);
			}
		}
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(j!=2)
		{
			printf("%d ",(matrix1[i][j]+matrix2[i][j]));
		}
		else
		{
			printf("%d\n",(matrix1[i][j]+matrix2[i][j]));
		}

	}
}
//printf("Printing the transpose of first matrix:\n ");
//for(i=0;i<3;i++)
//{
  //	for(j=0;j<3;j++)
    //	{
      //		if(j==2)
	//	{
	  //		printf(" %d\n",matrix1[j][i]);
	    //	}
	      //	else
		//{
		  //	printf(" %d",matrix1[j][i]);
	     //	}
       //	}
//}
	getch();
}