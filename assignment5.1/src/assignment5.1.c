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
	int limit,array1[100],array2[100],i,j,temp;
	setbuf(stdout,NULL);
	printf("enter array limit");
	scanf("%d",&limit);
	printf("enter the values of array1");
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
	}
	printf("enter the values of array2");
	for(i=0;i<limit;i++){
		scanf("%d",&array2[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(array1[i]>array1[j]){
				temp=array1[i];
				array1[i]=array1[j];
				array1[j]=temp;
			}
		}
	}
	for(i=0;i<limit-1;i++){
			for(j=i+1;j<limit;j++){
				if(array2[i]>array2[j]){
					temp=array2[i];
					array2[i]=array2[j];
					array2[j]=temp;
				}
			}
		}
	printf("sorted values of array1 are: ");
	for(i=0;i<limit;i++){
		printf("%d\t",array2[i]);
	}
	printf("sorted values of array2 are: ");
		for(i=0;i<limit;i++){
			printf("%d\t",array1[i]);
		}
	return EXIT_SUCCESS;
}
