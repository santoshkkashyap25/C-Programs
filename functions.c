#include <stdio.h>
#include<stdlib.h>

void pass_by_value(int);// formal paramters used
void pass_by_address(int*);

//Call by value
void display_value(char ch)
{
	printf("%c\n",ch);
}

// call by reference
void display_reference(char *ch)
{
	printf("%c\n",*ch);
}

//taking complete array
void display_arr(char *arr,int num)
{
	for(int i=0;i<num;i++)
	{
	printf("Arr[%d]=%c\n",i,*arr);
	arr++;
	}
}


/*functions
1.Each C pgm must have at least one function i.e. main()
2.function:return_type fun_name(args_list)
3.return type can be void in that case nothing is returned 
4.Same data type should store the value as of return type of function.
5.function before main() don't need function declaration but after the main needs it. e.g. ret_type fun_name(parameter list);
*/

int main()
{
	int x=20;
	pass_by_value(x); //Actual prameters used
	printf("pass_by_value-->x=%d\n",x);
	
	pass_by_address(&x); // Address is passed
	printf("pass_by_address-->x=%d\n",x);

  //Passing array elements and array to function   
	
	char arr[]={'a','b','c','d','e','f'};

	printf("Display using value\n");
	for(int i=0;i<6;i++)
	display_value(arr[i]);

	printf("Display using reference\n");
	for(int i=0;i<6;i++)
	display_reference(&arr[i]);

	printf("Diplaying by passing complete Array\n");
	display_arr(arr,6); //mandatory to pass length of array

	
	return 0;
}

void pass_by_value(int i)
{
	 i=99;
	return;
}

void pass_by_address(int *i)
{
	*i=64;
	return;
}