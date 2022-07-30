#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr;
int arr[]={10,20,40,56};
clrscr();
ptr=&arr[3];
printf("%d\n",ptr);
printf("%d",*ptr);
getch();
}