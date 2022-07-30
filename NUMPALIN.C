#include<stdio.h>
#include<conio.h>
void main()
{
	int checker=0;
	int counter=0;
	int numcounter=1;
	int check[20];
	int check2[20];

	while(checker==0)
	{
		printf("Enter the digit %n of the number: ",numcounter);
		scanf("%d",check[counter]);
		check2[(19-counter)]=check[counter];
		printf("Do you want to continue to input?If yes,press '0' else,press '1'\n");
		scanf("%d",&checker);
		numcounter++;
		counter++;
	}
getch();

