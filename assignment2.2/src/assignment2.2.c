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
	int a;
	float b,sum;
	setbuf(stdout,NULL);
	printf("enter number1:");
	scanf("%d",&a);
	printf("enter number2:");
	scanf("%f",&b);
	sum=a+b;
	printf("sum is %f",sum);

	return EXIT_SUCCESS;
}
