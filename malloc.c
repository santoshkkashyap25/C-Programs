/*input
3
4
2
1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,count=4;
	int total=0;
	float avg=0.0;
	int *p;
	
	p=(int*)malloc(count*sizeof(int)); // malloc creates heap memory for the expandable program
	printf("Enter Numbers\n");
	
	for(i=0;i<count;i++)
	{
		scanf(" %d",&p[i]);
		total=total+p[i];
	}

	avg=(float)total/count;
	printf("Average=%f\n",avg);
	
	free(p); // memory must be freed

	return 0;
}