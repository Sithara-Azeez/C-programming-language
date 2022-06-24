/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,si;
	setbuf(stdout,NULL);
	printf("amount:");
	scanf("%d",&p);
	printf("rate:");
	scanf("%f",&r);
	printf("years");
	scanf("%f",&n);
	si=((p*r*n)/100);
	printf("SI is:%f",si);
	return EXIT_SUCCESS;
}
