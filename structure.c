#include <stdio.h>
#include<stdlib.h>
#include"header.h"


// structures are used to contain hetrogeneous type of elements

struct health
{
	int height;
	int weight;
}report;  // struct struct_name{ data_type member_name; ................  }var_name;

// Designated initializers : when only some member need to be initialized for variables
// e.g. struct struct_name var_name={.member2=value2,.......};

// nested structures

struct address
{
	int street;
	char* city;
};

typedef struct student_data
{
	int roll;
	char* name;
	struct address addr;
}data;

int main(){

	struct user Santosh; // struct struct_name var_name;
	struct user kumar={2,34,45,"kumar"}; // struct struct_name var_name={value1, value2,........};

	report.height=90;
	report.weight=45;

	Santosh.userID=1; // var_name.member_name=value;
	
	puts("Enter User 1 name");
	gets(Santosh.name);
	
	printf("UserID %d name is %s",Santosh.userID,kumar.name);

	data sk;
	
	sk.roll=34;
	sk.name="Santosh";
	sk.addr.street=90;
	sk.addr.city="Delhi";
	
	printf("Roll=%d\n",sk.roll);
	printf("Name=%s\n",sk.name);
	printf("Street=%d\n",sk.addr.street);
	printf("City=%s\n",sk.addr.city);
	
	return 0;

}