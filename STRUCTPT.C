#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollnum;
	int age;
}student1[2], *ptr;
void main()
{
  clrscr();
  ptr = student1;
  strcpy((*ptr).name,"Aditya");
  printf("%s",(*ptr).name);
  getch();
}