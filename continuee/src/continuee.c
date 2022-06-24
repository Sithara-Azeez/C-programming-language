/*
 ============================================================================
 Name        : continuee.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
		int limit=10,i;
		setbuf(stdout,NULL);
		for(i=0;i<limit;i++){
			printf("hai\n");
			if(i==5){
				continue;
			}
			printf("hello\n");
		}
		printf("program finished");
	return EXIT_SUCCESS;
}
