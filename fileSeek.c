#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("seek.txt","w+"); //w+ means write + read
	
	fputs("Hello world",fp);
	
	fseek(fp,6,SEEK_SET); //SEEK_SET:from begin  - fseek(file_pointer,number of char to move,begin/end)
	fputs("India",fp);
	
	fseek(fp,-11,SEEK_END); // SEEK_END:from end (-ve)
	fputs("Hi   ",fp);
	
	fclose(fp);
	
	return 0;
}