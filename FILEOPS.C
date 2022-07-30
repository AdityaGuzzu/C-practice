h 0
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f;
	char c;
	clrscr();
	f = fopen("Testing.txt","w");
	while((c=getchar())!= EOF)
	{
		putc(c,f);
	}
	fclose(f);
	f = fopen("Testing.txt","r");
	while((c=getc(f))!=EOF)
	{
		printf("%c\n",c);
	}
	fclose(f);
	getch();
}
//The below have been input by file operations.
