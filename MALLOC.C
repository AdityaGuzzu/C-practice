//A program to demonstrate malloc
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp;
	int i;
	int *ptr;
	clrscr();
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int)); //This assigns a pointer that points to the first element ofthe array
	for(i=0;i<n;i++)
	{
		printf("\n The address of ptr[%d] is: %d",i,ptr++);
	}
	ptr[2]=4;
	printf("\n The value is %d",*(ptr+2)); //*(ptr+2) is the same as ptr[2]
	getch();
}
