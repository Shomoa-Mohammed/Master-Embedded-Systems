/*
 ============================================================================
 Name        : Task3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b ,c ;
	printf("Enter three numbers :");
	fflush(stdout);
	scanf("%f \n %f\n %f\n ",&a,&b,&c);
	if(a>b && a>c )
	 {
		printf("Largest number = %f",a);
	 }
	else if(b>a && b>c )
	 {
		printf("Largest number = %f",b);
	 }
	else if(c>a && c>b )
	 {
		printf("Largest number = %f",c);
	 }

}
