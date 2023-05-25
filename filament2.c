#include<stdio.h>

main()
{
	char email[100]="tirthgondaliya8@gmail.com";
	
	char pass[100]="129834765";
	
	char email1[100];

	printf("enter your e-mail = ");
    gets(email1);
	
	char pass1[100];

	printf("enter your password=");
	gets(pass1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("login sussesful");
		}
		else
		{
			printf("your password is wrong");
		}
	}
	else
	{
		printf("your email is wrong");
	}
}

