/*
 ============================================================================
 Name        : pos_or_neg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&num);
	if(num>0){
		printf("entered number is positive");
	}
	else{
		printf("entered number is  negative");
	}
	return EXIT_SUCCESS;
}
