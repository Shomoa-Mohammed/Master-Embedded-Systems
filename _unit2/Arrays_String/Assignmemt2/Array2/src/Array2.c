/*
 ============================================================================
 Name        : Array2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf( stdout, NULL, _IONBF, 0 );
	setvbuf(stderr, NULL, _IONBF, 0);

	float num[50],avg;
	int sum=0,i,n;

	printf("Enter the numbers of data :");
	scanf("%d",&n);
	for(i=0 ;i<n;i++)
	 {
		printf("%d Enter the numbers :",i+1);
		scanf("%f",&num[i]);
	 }
	for(i=0 ;i<n;i++)
		 {
			sum+=num[i];
		 }

	avg = sum /n;
	printf("Average = %f",avg);

}
