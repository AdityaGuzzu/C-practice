//A function to demonstrate string handling functions
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char word[20];
	char temp[20];
	clrscr();
	printf("Enter a string: ");
	gets(word);
	strcpy(temp,word);    //copies word in temp
	strrev(temp);                             //reverses temp
	if(strcmp(temp,word)==0)         //if both strings are the same, 0 is returned
	{
		printf("\nthe given word is a palindrome.");
	}
	else
	{
		printf("\nThe given word is not a palindrome");
	}
	getch();
}