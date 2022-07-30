#include<stdio.h>
#include<conio.h>
struct student       //"student" is structure tag
{
	char name[30];          //name,age,height are structure members/elements
	int age;
	int height;
};
void main()
{
	struct student student1 = {"Aditya",18,6}; //declaring and initialising a structure variable
	clrscr();
	printf("%s",student1.name);
	getch();
}