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
	int limit,i,values[100],count=0;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter values:");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		if(values[i]%2==0){
		count=++count;
		}
	}
	printf("number of even number in the given array is: %d",count);
	return EXIT_SUCCESS;
}
