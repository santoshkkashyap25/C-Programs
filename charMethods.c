#include <stdio.h>
#include<stdlib.h>
#include<ctype.h> // to use character functions

int main()
{
	int x='y';
	if(isalpha(x))// checks alphabet or not
	{
		printf("%c is Alphabet\n",x);
		
		if(isupper(x))
		printf("%c is Uppercase\n",x);// checks lowercase or not
		
		else
		printf("%c is lowercase\n",x);		
	}

	else
	{
	if(isdigit(x))
	printf("%c is Digit\n",x);// checks digit or not
	else
	printf("%c is something mysterious!\n",x);
	}

printf("----toupper() and tolower()------\n");
	char t='t';
	char u='A';
	char v='7';
	char w='@';
	char y='U';
	printf("%c \n",toupper(t));// changes to uppercase
	printf("%c \n",toupper(u));// no effect 
	printf("%c \n",toupper(v));// no effect 
	printf("%c \n",toupper(w));// no effect
	printf("%c \n",tolower(y));// changes to lowercase

return 0;
}