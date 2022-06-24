/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Total mark:");
	scanf("%f",&mark);
	if(mark>90){
		printf("A grade");
	}else if(mark>80){
		printf("B grade");
	}else if(mark>70){
		printf("C grade");
	}else if(mark>60){
		printf("D grade");
	}else if(mark>50){
		printf("E grade");
	}else{
		printf("FAILED!!!");
	}
	return EXIT_SUCCESS;
}
