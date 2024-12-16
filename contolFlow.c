#include<stdio.h>
#include <stdlib.h>

int main()
{

//  elif conditional check

	float grade1=45.5;
	float grade2=67.5;
	
	float avg= (grade1+grade2)/2;
	
	printf("Avg=%.2f\n",avg);
	
	if (avg>=90)
	printf("Grade A\n");	

	else if(avg>=80)
	printf("Grade B\n");

	else if(avg>=70)
	printf("Grade C\n");	

	else
	printf("Sorry, You Failed\n");

//  for loop
	int i=1;
	for(;i<10;) // for(i=1;i<10;i++) or for(;i<10;i++) All OK
	{
		printf("%d\n",i);
		i++;
	}

//  multiple test conditons are not separated by comma instead by some logical operator
	
	int k,l;
	printf("multiple test condition\n");
	
	for(k=6,l=9;k<15 && l<56;l++,k++)
		printf("%d\n",k);


	// while loop
	i=0;
	while(i<5)
	{
		printf("Hello");
		i++;
	}


	// do while loop
	i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

	return 0;
}