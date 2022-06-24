/*
 ============================================================================
 Name        : function-without.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	int k;
	setbuf(stdout,NULL);
	k=sum();
	printf("result is %d",k);
	return EXIT_SUCCESS;
}

int sum(){
	int result,num1,num2;
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	result=num1+num2;
	return result;
}
