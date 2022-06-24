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
	int i,num,limit=10,res;
		setbuf(stdout,NULL);
		printf("enter a number");
		scanf("%d",&num);
		for(i=1;i<=limit;i++){
			res=i*num;
			printf("%d*%d=%d\n",i,num,res);
		}

	return EXIT_SUCCESS;
}
