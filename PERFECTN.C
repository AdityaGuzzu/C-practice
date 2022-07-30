#include<stdio.h>
#include<conio.h>
void main()
{
int num1,temp,checker;
clrscr();
printf("Enter the number: ");
scanf("%d",&num1);
temp=1;
checker=0;
while(num1>temp)
{
   if(num1%temp==0)
   {
	checker+=temp;
   }
   temp++;
}
   if(checker==num1)
   {
   printf("%d is a perfect number",num1);
   }
   else
   {
   printf("%d is not a perfect number",num1);
   }
getch();
}