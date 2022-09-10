/*
 ============================================================================
 Name        : HW2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SDistance
{
	int feet;
	float inch;

};

int main(void) {
	     setvbuf( stdout, NULL, _IONBF, 0 );
	     setvbuf( stderr, NULL, _IONBF, 0 );

	     struct SDistance D1 , D2,r;
	     printf("Enter information of 1st Distance \n");
	     printf("Enter Feet :");
	     scanf("%d",&D1.feet);
	     printf("Enter Inch :");
	     scanf("%f",&D1.inch);


	     printf("Enter information of 2nd Distance \n");
	     printf("Enter Feet : ");
	     scanf("%d",&D2.feet);
	     printf("Enter Inch : ");
	     scanf("%f",&D2.inch);

	     r.feet=D1.feet+D2.feet;
	     r.inch=D1.inch+D2.inch;

	     if(r.inch>=12)
	        {
	    	       r.inch = r.inch - 12.0;
	    	       ++r.feet;
	        }
	        printf("Sum of Distance = %d' %.1f''", r.feet, r.inch);

}
