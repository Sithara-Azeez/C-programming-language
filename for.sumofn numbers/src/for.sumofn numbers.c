/*
 ============================================================================
 Name        : sumofn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,sum=0;
	setbuf(stdout,NULL);
	printf("enter a number:");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		sum=sum+i;

	}
	printf("result=%d",sum);
	return EXIT_SUCCESS;
}
