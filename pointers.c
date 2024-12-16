/*input
Border
*/

#include<stdio.h>
#include<stdlib.h>

int sum(int num1,int num2)
{
	return num1+num2;
}

int main()
{
	// pointer to variables
	int x=45;
	
	printf("Adress\t Name \t Value\n");
	printf("%p\t x\t %d\n",&x,x);
	
	int *px=&x;//passing address
	printf("%p\t px\t %d\n",px,*px);//dereferencing pointer

	// pointer to array
	int val[]={90,70,60,40};
	int*p;
	p=&val[0]; //p=val --> OK as Array name always points to first element

	int *f;
	f=&val[0];
	
	printf("Normal way\n");
	for(int i=0;i<4;i++)
		printf("val[%d]:value=%d Address=%p\n",i,val[i],&val[i]);

	printf("Using pointers\n");
	for(int i=0;i<4;i++)
	{
		printf("val[%d]:value=%d Address=%p\n",i,*p,p);
		p++;
	}

	/*Pointer Arithmetic
	1.(p+i)==&val[i]
	2.*(p+i)==val[i]
	*/

	printf("Using pointers Arithmetic\n");
	for(int i=0;i<4;i++)
	{
		printf("val[%d]:value=%d Address=%p\n",i,*(f+i),(f+i));
	}

	//pointers to strings
	char movie1[]="All of us are cool!";
	// movie1="All of us are dead" Not possible but with pointers possible
	
	char *movie2="Hello Brother";
	puts(movie2);
	movie2="Welcome";
	puts(movie2);

	//fgets(pointer_name,length,stdin) limits the input string length from user
	char  movie[20];
	char *pmov=movie;// array name is itself address
	
	puts("Enter movie name?");
	fgets(pmov,2,stdin);
	puts(pmov);

	int (*fp)(int ,int); // pointer for storing the functions address - int (*fp)(int ,int)=&sum;  --> OK
	fp=&sum;             //fp=sum;  -->OK ,As function name refers to its address itself
	
	int op1=fp(1,60);
	int op2=sum(1,60);
	
	printf("Sum using function=%d\n",op2);
	printf("Sum using function pointer=%d\n",op1);


	return 0;
}