//A function to demonstrate passing an array to a function.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int sum_func(int arr[],int n);
	int i;
	clrscr();
	printf("Enter the elements of the arrray: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe sum of all elements of arr is: %d",sum_func(arr,5));
	getch();
}
int sum_func(int arr[],int n)
{
	int i=0;
	int sum = 0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}



