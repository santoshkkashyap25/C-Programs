#include <stdio.h>
#include<stdlib.h>
#include <string.h> // to use strcpy

int main()
{
	char name[14]="Santosh Kumar";   // 13+1 byte for Null
	char str2[]={'h','i','\0'};      //  OK but explicitly requires NULL
	printf("My name is %s\n",name);

	name[1]='u'; // easy to change elements with array
	printf("My name is %s\n",name);

	char surname[] ="Kashyap"; 
	// if assigned on same time then no need of giving bytes
	printf("My surname is %s\n",surname);

    // name ="mahesh"; Not OK with array , use strcpy(arr_name,New_value) 
	strcpy(name,"mahesh");
	printf("My name is %s\n",name);
	
	return 0;
}