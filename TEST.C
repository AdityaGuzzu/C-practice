#include<stdio.h>
void main()
{
int matrix1[2],matrix2[2];
int i;
clrscr();
for(i=0;i<2;i++)
{
	matrix1[i]=i+1;
	matrix2[i]=matrix1[i];


}
for(i=0;i<2;i++)
{
printf("%d ",matrix1[i]);
}
for(i=0;i<2;i++)
{
printf("%d ",matrix2[i]);
}
getch();
}