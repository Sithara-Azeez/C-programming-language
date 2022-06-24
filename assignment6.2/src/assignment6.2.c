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
	int limit,i,j,array1[3][3],array2[3][3],sum;
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter values of array1");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			scanf("%d",&array1[i][j]);
		}

	}
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
	printf("enter values of array2");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			scanf("%d",&array2[i][j]);
		}

		}
	printf("values of array2 are:\n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t",array2[i][j]);
		}
		printf("\n");
	}
	printf("sum of 2 array are\n");

	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			sum=array1[i][j]+array2[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}
	/*for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t",sum);
		}
		printf("\n");
	}*/

	return EXIT_SUCCESS;
}
