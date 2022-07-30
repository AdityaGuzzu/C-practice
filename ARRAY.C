//An array is a fixed sized collection of elements of the same data type.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5]; //Delaration so that the compiler allocates memory
		    //Decaration syntax: type array_name[size];
	int arr2[] = {2,3,2,5,6}; //Alternate type of declaration.
				//It's called compile time initilization
	clrscr();
	printf("%d",arr2[2]);
	getch();
}
