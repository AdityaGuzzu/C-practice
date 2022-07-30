//A program to demonstrate assigning pointers to arrays
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10]= {2,5,3,5};
	int *ptr;
	clrscr();
	ptr = arr;
	printf("%d",*(ptr+1)); //This gives the value of the second variable
	printf("\n%d",*ptr+1);  //This gives the value of the first element plus one
	printf("\n%d",ptr+1); //This prints the address of the second element
	getch();
}