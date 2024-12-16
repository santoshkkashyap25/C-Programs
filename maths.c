#include <stdio.h>
#include<stdlib.h>
#include<math.h> // to use math functions

int main()
{
	float num1=9.689;
	float num2=3.34;
	
	printf("num1=%.2f\n",floor(num1));
	printf("num2=%.2f\n",floor(num2));
	printf("num1=%.2f\n",ceil(num1));
	printf("num2=%.2f\n",ceil(num2));

	int abs_diff=num2-num1;

	printf("Absolute Difference=%d\n",abs(abs_diff));
	printf("power=%f\n",pow(5,2));
	printf("Squareroot=%f\n",sqrt(8));
	
	printf("Random Function\n");
	int i;

	for(i=0;i<20;i++)
		printf("%d\n",rand());

	printf("Diceroll\n");
	for(i=0;i<20;i++)
	{
		int diceroll=rand()%6+1;
		printf("%d\n",diceroll);
	}
	
	return 0;

}