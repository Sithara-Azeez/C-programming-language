/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	int i, len, flag;
	setbuf(stdout,NULL);
	flag = 0;

	printf("\n Please Enter any String :  ");
	gets(str);

	len = strlen(str);

	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
			{
				flag = 1;
				break;
			}
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}
	return EXIT_SUCCESS;
}
