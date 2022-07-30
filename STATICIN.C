#include<stdio.h>
#include<conio.h>
void main()
{
	void sum(void);
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		sum();
	}
getch();
}
void sum(void)
{
	static int num=0;
	num+=1;
	printf("%d\n",num);
}
