/*A program to store marks of three students in an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int marks[3][5],i,j;
clrscr();
for(i=0;i<3;i++)
{
j=0;
for(j=0;j<5;j++)
{
/*what this means is that I will fill the elements row wise.So the marks of a student are stored in a row*/
printf("Enter the marks of student number %d\n",i+1);
scanf("%d",&marks[i][j]);
}
 }
 i=0;
 j=0;
 for(;i<3;i++)
 {
	printf("Student %d ",i+1);
	j=0;
	for(j=0;j<5;j++)
	{
		if(j!=4)
		{
		printf("%d ",marks[i][j]);
		}
		else
		{
		printf("%d \n",marks[i][j]);
		}
	}
 }
 getch();
 }