#include<stdio.h>

main()
{
	char name[100],temp[100];
	
	printf("enter your string =");
	gets(name);
	
	strcpy(temp,name);
	
	 printf("reverse string=%s",strrev(temp));
	
	 if(strcmp(temp,name)==0)
	 {
	 	printf("\nstring is palindrom");
	 }
	 else
	 {
	 	printf("\nstring is not palindrom");
	 }
}

