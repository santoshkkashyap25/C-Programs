#include <stdio.h>
#include <stdlib.h>
#include "header.h" // searches the header file in the same directory and " " used for project own headers

#define AGE 20
#define NAME "Santosh"
#define Square(x) x*x
#define DEBUG 1
#define TRACE printf("Executing %s line %d at %s on %s \n", __FILE__, __LINE__,__TIME__, __DATE__); 

// predefined macros for file, date , time ,line 
// Use Uppercase for constants
// Always try to specify macros correctly by putting (parenthesis)

int main()
{
	#ifdef DEBUG
		printf("Debugging is enabled\n");
	#else
		printf("Debugging is disabled\n");
	#endif

	int i=5;

	TRACE

	printf("%s is %d years old\n",NAME,AGE);
	printf("His DOB is %d-%d-%d\n",DATE,MONTH,YEAR);
	printf("Wrong ans without parenthesis:%d\n",Square(i+2));

	TRACE

}