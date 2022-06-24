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
void getarray(int);
void displayarray(int);
int main(void) {
	int limit;
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);

	getarray(limit);
	displayarray(limit);

	return EXIT_SUCCESS;
}
void getarray(int limit){
	int i,values[100];
	printf("enter values:");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
}
void displayarray(int limit){
	int i,values[100];
	printf("entered values are:\n");
	for(i=0;i<limit;i++){
		printf("%d\t",values[i]);
	}
}
