#include <stdio.h>
#include <stdlib.h>

/*
Some file Modes:
1."r"-read only.It returns address of first character or Null
2."w"-write only .It creates new file when it does not exist.
3."a"-append only.It points to last character of file and appends from there .Creates a new file if does not exist.
4."r+"-read+write+modify mode 
5."w+"-read+write +modify
6."a+"=append +read only no modification allowed.
*/ 

int main()
{
	FILE *fp;
	char c;
	fp=fopen("Hello.txt","rwa+");
	
	if(fp==NULL)
	{
		puts("Error while oening file.");
		exit(0);
	}

	// charcter by character reading

	while(1)
	{
		c=fgetc(fp);
		if (c==EOF)
			break;
		printf("%c",c);
	}

    // reading string from the file :char * fgets(char *str , int length ,file_pointer); 
	
	char singleLine[150];

	while(!feof(fp)) // Or while(there is no end of file)
	{
		if(fgets(singleLine,150,fp)==NULL)
			break;
		else
			puts(singleLine);
	}

	fprintf(fp,"\n beautiful");

	char ch='b';
	fputc(ch,fp); //way 1
	fprintf(fp,"%c",ch); //way 2

	char str[100]="Santosh";
	fputs(str,fp); // writing string to the file
	fputs("\n",fp); // fputs don't add newline but have to add manually

	fclose(fp);
	
	return 0;
}