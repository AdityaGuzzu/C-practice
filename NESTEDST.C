#include<stdio.h>
#include<conio.h>
struct student   //Struct definition
{
	int rollnum;
	char name[10];
};
struct student student1;   //declaration of structure variable
void main()
{
struct student *ptr;        //declaring a struct pointer
void structptr(struct student *p);  //func declaration
clrscr();
ptr = &student1;       //initialising the struct ptr
structptr(ptr);      //caling func using  a pointer "ptr"
printf("%d",student1.rollnum);

getch();
}

void structptr(struct student *p)   //func definition which uses a struct pointer
{
	int k;
	scanf("%d",&k);
	(*p).rollnum = k;    //mandatory to use brackets around pointers while using them to access members of a struct
}