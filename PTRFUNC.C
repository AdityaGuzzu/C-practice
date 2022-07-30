//A program to demonstratre passing pointers to a function
#include<stdio.h>
#include<conio.h>
void test(int a,int b, int *c, int *d);
void main()
{
   int *ptr1,*ptr2;
   clrscr();
   test(5,6,ptr1,ptr2);
   printf("%d %d",*ptr1,*ptr2);
   getch();
}
void test(int a,int b,int *c,int *d)
{
	*c=a*b;
	*d=a/b;
}
