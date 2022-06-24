/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int a,b,temp;
		setbuf(stdout,NULL);
		printf("enter number in a");
		scanf("%d",&a);
		printf("enter number in b");
		scanf("%d",&b);
		temp=a;
		a=b;
		b=temp;
		printf("a:%d b:%d",a,b);

	return EXIT_SUCCESS;
}
