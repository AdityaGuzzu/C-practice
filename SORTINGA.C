/* A program to sort arrays in C in ascending order*/
#include<stdio.h>
void main()
{
	int i,j,size,swapvar;
	int array[]={9,7,5,10,3,1,322,567,4};
	clrscr();
	size= (sizeof(array)/2);

	/*Sizeof() gives the size in bytes.p
	1 place of int occupies 2 bytes. so to know
	the number of ekements, we need to divide the size by two*/

	printf("The size of the array is %d elements\n",size);
	for(i=0;i<=(size-1);i++)
	{
		for(j=0;j<=(size-1);j++)
		{
			swapvar=array[j+1];
			if(array[j]>array[j+1])
			{
				array[j+1]=array[j];
				array[j]=swapvar;
			}
		}
	}
	printf("The ascending order of the numbers in the array is\n ");
	for(i=0;i<(size);i++)
	{
		printf("%d ",array[i]);
	}
	getch();
	}