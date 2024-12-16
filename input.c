/*input
29.5
34.67
santosh
kumar
56
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char first_name[20];
	char last_name[20];
	int age;

	float grade1;
	float grade2;
	
	printf("Enter your grades\n");
	scanf(" %f",&grade1); // leave 1 whitespace before %f to make bug free code 
	scanf(" %f",&grade2); // scanf immediately terminates input after encountering the first whitespace

// always use '&' while taking int , float,char input and don't use & with the char arrays
	printf("What is your first name ?\n");
	scanf("%s",first_name);

	printf("What is your last namme?\n");
	scanf("%s",last_name);
	
	printf("What is your age?\n");
	scanf("%d",&age);
	
	printf("%s %s is %d years old.\n",first_name,last_name,age);
	return 0;

}