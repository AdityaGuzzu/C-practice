#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct std_data
{
	char name[20];
	int rno;
	int marks[3];
	int total;
	float avg;
};
void main()
{
	int num,i,j;
	std_data *ptr;
	clrscr();
	printf("How many students' data do you want? ");
	scanf("%d",num);
	ptr = (std_data *)calloc(num,sizeof(std_data));
	for(i=0;i<num;i++)
	{
		printf("Enter the details of student %d",i+1);
		printf("\nEnter the name: ");
		gets(ptr[i].name);
		printf("\nEnter the roll number: ");
		scanf("%d",&ptr[i].rno);
		printf("\nEnter the three subject marks: ");
		scanf("%d%d%d",ptr[i].marks[0],ptr[i].marks[1],ptr[i].marks[2]);
		ptr[i].total= ptr[i].marks[0]+ptr[i].marks[1]+ptr[i].marks[2];
		ptr[i].avg = ptr[i].total/3;
	}
	getch();
}
