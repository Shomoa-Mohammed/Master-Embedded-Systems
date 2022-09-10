/*
 ============================================================================
 Name        : HW5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(void) {
	     setvbuf( stdout, NULL, _IONBF, 0 );
	     setvbuf( stderr, NULL, _IONBF, 0 );

	     float r , area;
	     printf("Enter the radius : ");
	     scanf("%f",&r);
	     area = PI*r*r;
	     printf("area = %.2f",area);



}
