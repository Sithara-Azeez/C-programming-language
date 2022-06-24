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
	float mark=100;
	setbuf(stdout,NULL);
	printf("enter your mark:");
	scanf("%f",&mark);
	if(mark>50){
		printf("congrats...passed");
	}
	else{
		printf("failed!!!");
	}
	return EXIT_SUCCESS;
}
