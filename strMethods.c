/*input
shyam
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
1.strlwr -> converts strings to lowercase
2.strupr -> converts strings to uppercase
3.strcmpi ->compares strings but ignores the case
4.stricmp ->strcmpi 
5.strnicmp->compares first n characters of two strings and ignore case
6.strdup -> used for duplication of strings
7.strset -> use to set the string to a character
8.strnset ->strset for the first n character 
9.strrev -> used to reverse the string
*/

int main()
{
	//puts and gets allows to read and write string with space in between and puts automatically add newline
	puts("puts and gets:");
	char name[100];
	puts("What is your name?");
	gets(name);                
	puts(name);

	//strlen: size_t strlen(const *str)   -- size_t means unsigned short
	//sizeof() returns total bytes occupied including null
	puts("strlen:");
	char begger[20]="Begger";
	printf("The length is %d\n",strlen(begger));
	printf("The size of array is %d\n",sizeof(begger));

	//strnlen: size_t strnlen(const* str, size_t maxlen) : Returns lenth if less than maxlen else maxlen returned
	puts("strnlen:");
	printf("The length when max length 20 = %d\n",strnlen(begger,20));
	printf("The length when max length 5 = %d\n",strnlen(begger,5));

	//strcmp: int strcmp(const* str1,const* str2)
	//if str1==str2 returns 0 (compares ASCII) elif ASCII code of first unmatched char of str1<char in str2 returns -ve else +ve
	puts("strcmp:");
	char hello[10]="Beguio";
	if (strcmp(begger,hello)==0) printf("Equal\n");
	else printf("Not Equal\n");

	//strcoll: int strcoll(const* str1,const* str2) : strcmp like
	puts("strcoll:");
	int p=strcoll(begger,hello);
	if (p==0) printf("Equal\n");
	else if(p>0) printf("str1 has greater ASCII code than str2\n");
	else printf("str1 has lesser ASCII code than str2\n");

	//strncmp:int strncmp(const* str1,const* str2 , size_t n) : it compares till first n characters only
	puts("strncmp:");
	if (strncmp(begger,hello,4)==0) printf("Equal\n");
	else printf("Not Equal\n");

	//strcat: char *strcat(char* str1,const char* str2) -->str1=str1+str2
	puts("strcat:");
	char welcome[50]="Hey ";
	strcat(welcome,"Santosh");//strcat(array_name,string to be concateanted)
	printf("%s\n",welcome);

	//strncat: char *strncat(char* str1,char* str2, size_t n) : Appends first n characters of string 2
	puts("strncat:");
	char wel[50]="wel";
	char come[70]="come back";
	strncat(wel,come,4);
	printf("%s\n",wel);

	//strspn: int strspn(const *str1, const *str2) : returns the numbers of characters matched in str1 of the str2
	puts("strspn:");
	int x=strspn("abcdef","abchd eee");
	printf("The number of characters matched is %d\n",x);

	//strcspn: int strcspn(const *str1, const *str2) : returns numbers of chars before the first  matched char of str2
	puts("strcspn:");
	int y=strcspn("abcdefghi","ghij");
	printf("The number of characters before matched is %d\n",y);
	printf("The location of first matched char is %d\n",y+1);

	//strcpy: char *strcpy(char *str1,char *str2) : str1(dest)=str2(src to copied)
	puts("strcpy:");
	strcpy(welcome,"Santosh Kumar");// replaces string content
	printf("%s\n",welcome);

	//strncpy: char *strncpy(char *str1,char *str2, size_t)
	//str1=str2(n) if str2>n then copy till n elif str2<n then copy whole str2 and append null till n
	puts("strncpy:");
	strncpy(wel,come,5);
	printf("%s\n",wel);

	//strchr: char *strchr(const char *str,int ch) --> searches ch in str
	puts("strchr:");
	char word[60]="India is great";
	printf("%s\n",strchr(word,'a'));

	//strrchr: char *strrchr(const char *str,int ch) : searches ch in str from end
	puts("strrchr:");	
	printf("%s\n",strrchr(word,'a'));

	//strstr:char *strstr(const char *str,char* search_term) : searches str in given str
	puts("strstr:");
	printf("%s\n",strstr(word,"is"));

return 0;
}