struct user{
	int userID;
	int age;
	float weight;
	char name[25];

};

/* typedef acts as an alias for struct struct_name in code for better readability
   
   struct struct_name{            	      typedef struct struct_name{
	..................              	  .......................
	..................               	  .......................
   };                            ---->     }addr;

   struct struct_name var_name;   	      addr var_name;
   var_name.member_name=value;      	  var_name.member_name=value;

*/

#define MONTH 8
#define YEAR 2000
#define DATE 25