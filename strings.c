#include<stdio.h>
#include<stdlib.h>

int main()
{
    // way 1
    char * str ="santosh";  // read only string but str can point to other string
    // str[1]='d';  OR *(str+1) : It will throw an error (segmentation fault)
    while(*str!='\0')
    {
        printf("%c",*str);
        str++;
    }   

    // way 2
    str=NULL; // char * str
    int size = 4; /*one extra for ‘\0’*/
    str = (char *)malloc(sizeof(char)*size);
    *(str+0) = 'G'; 
    *(str+1) = 'f'; 
    *(str+2) = 'G'; 
    *(str+3) = '\0'; 

    str[1]='d';
    printf("%s",str);


}