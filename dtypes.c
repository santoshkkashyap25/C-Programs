#include<stdio.h>
#include<stdlib.h>

// on cmd type --> gcc filename.c then cmd --> app_name

int  main()
{

	printf("hello!\n"); // \n --> new line 
	printf("Santosh\t\t"); // \t --> tab
	printf("Kumar\a\n"); // \a --> audio or alarm
	printf("%s is an CS %s\n","Santosh","Engineer"); // %s --> format specifiers : string
	printf("%s graduated in %i\n","Santosh",2021);// %d %i --> format specifiers : decimal
	printf("pi is %f\n",3.1445656767); // %f --> format specifiers : float by default upto 6 decimal places
	printf("pi is %.2f\n",3.142345678); // %.2f --> upto 2 decimal places
	printf("pi is %.4f\n",3.123456);

	unsigned val=603450530;
	printf("Val+10=%u\n",val+10);
	
	printf("%d\n",sizeof(int));


	//typesetting
	float avg;
	int units=19;
	int cost=108;
	int days_worked=7;

	avg=(float)units*(float)cost/(float)days_worked;
	printf("avg=%.3f",avg);


	//variables

	int s_no=1;
	int age;
	int current_year = 2022;
	int dob = 2000;

	age = current_year-dob;
	
	printf("%d\n",s_no);
	printf("%s is %d years old\n","Santosh",age);
	return 0; // return 0 means pgm terminated correctly else not 

}

/*
These are reserved keywords(32) .They can not be used as variable name.

1)if, else, switch, case, default
6)break
7)int, float, char, double, long ,short
13)for, while, do
16)void
17)goto – Used for redirecting the flow of execution.Not used widely due to complexity
18)auto, signed, const, extern, register, unsigned ,static
25)return
26)continue
27)enum – Set of constants.
28)sizeof – It is used to know the size.
29)struct, typedef  – Both of these keywords used in structures (Grouping of data types in a single record).
31)union – It is a collection of variables, which shares the same memory location and memory storage.
32)volatile - prevent compiler to apply any optimization on variable.

*/