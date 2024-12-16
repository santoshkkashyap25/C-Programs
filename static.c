#include <stdio.h>
#include<stdlib.h>

int magic(int n)
{
static int r =5;
if (n <= 0) return 10;
if (n > 3)
{
r = 50;

int v=(r + magic(n-1));
printf("%d\n",v);
return v;
}

int v=(r - magic(n-1));
printf("%d\n",v);
return v;
}

int main()
{
	int x=magic(8);
	printf("%d\n",x);

return 0;
}