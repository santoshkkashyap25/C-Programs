#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	int A[3][2];

	for(i=0;i<3;i++)
		for(j=0;j<2;j++){
			printf("Enter the value for A[%d][%d]\n",i,j);
			scanf(" %d",&A[i][j]);
		}

	printf("The Array is:\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			printf("%d\t",A[i][j]);
			if (j==1)
				printf("\n");

		}

	int abc[2][2]={{1,2},
					{5,6}};  //better way to initialize 2DArray
	int def[2][2]={1,2,5,6}; //OK but not readable

	// In 2D Array second subscript always be mentioned else will be invalid

	// int a[2][]={1,2,3,4}; --> invalid
	// int arr[][]={1,2,3,4}; --> invalid
	int ar[][2]={1,2,3,4}; // OK
	printf("Addresses of the Elements\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			printf("%p\t",&A[i][j]);
			if (j==1)
				printf("\n");

		}

	printf("Addresses of the first Elements of each row\n");
	for(i=0;i<3;i++)
			printf("A[%d] for A[%d][0]=%p\t\n",i,i,A[i]);

return 0;

}

// In A[2][2] the A[0] points to the first element of the first row
// A[1] points to first element of the Second row