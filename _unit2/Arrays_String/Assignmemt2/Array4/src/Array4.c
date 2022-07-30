/*
 ============================================================================
 Name        : Array4.c
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

	int a[10],num , num1 ,location ,i;
	printf("Enter no of elements : \n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		 {
			scanf("%d",&a[i]);
		 }
	 printf("Enter the element to be inserted :");
	 scanf("%d",&num1);

	 printf("Enter the location:");
	 scanf("%d",&location);
	 //a[location-1]=num1;
	 for(i=num-1;i>=location-1;i--)
	 	 {
	 		a[i+1]=a[i];

	 	 }
	 a[location-1]=num1;
	 for(i=0;i<=num;i++)
	 	{
	 		printf("%d \t",a[i]);
	 	}



}
