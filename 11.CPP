#include<stdio.h>//write a program to check whether the entered character is capital,small letter,digit or any special character.
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	//To Take input from user.
	printf("\nEnter a character:");
	scanf("%c",&ch);
	//To check if character is upper case.
	if (isupper(ch))
	printf("\n%c is an upper case character",ch);
	//To check if character is lower.
	else if(islower(ch))
	printf("\n%c is a lower case character",ch);
	//To check if character is digit.
	else if(isdigit(ch))
	printf("\n%c is a digit case character",ch);
	//if character is a special character.
	else
	printf("\n%c is a special character",ch);
	getch();
}