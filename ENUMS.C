#include<stdio.h>
#include<conio.h>
#include<string.h>
/*Enums store integer values in strings as constants.*/
/*One of the main features of enums is using them. We don't need to convert
		data types during initilization*/
enum grades{E = 40, D = 50, C = 60, B = 70, A = 80, O = 90};
void main()
{
  char var[3];
  enum grades Aditya,Sravani,Narasimha,Joshua,GVSS,Nishant;
  char ask;
  clrscr();
  Aditya=A;  //A is an integer and has a value 80
  Sravani=O;  //O is an integer and has a value 90
  printf("Sravani has scored more than %d marks",Sravani);
  getch();
}