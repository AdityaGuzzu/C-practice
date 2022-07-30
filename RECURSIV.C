#include<stdio.h>
#include<conio.h>
int factorial(int m)
{
	if(m==1)
	{
		return 1;
	}
	else

	{
		return m*factorial(m-1);
	}
}