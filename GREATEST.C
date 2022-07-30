//A program to find the greatest of three integers by sorting technique.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[2];
	int i,temp;
	clrscr();
	printf("Enter the three numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++)
	{
		temp = arr[i];
		if(arr[i]>arr[i+1])
		{
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	printf("\nThe greatest number of three is %d",arr[2]);
	getch();
}