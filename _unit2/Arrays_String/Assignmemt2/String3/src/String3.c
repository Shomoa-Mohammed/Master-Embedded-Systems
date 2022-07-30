/*
 ============================================================================
 Name        : String3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
			setvbuf( stdout, NULL, _IONBF, 0 );
	        setvbuf(stderr, NULL, _IONBF, 0);

	        char rev [50] ;

	        int i, temp;
	        printf("Enter the string :");
	        gets(rev);
	        int l = strlen(rev)-1;
	        for(i=0;i<strlen(rev)/2;i++)
	         {
	        	temp=rev[i];
	        	rev[i]=rev[l];
	        	rev[l--]=temp;
	         }
	        printf("Reverse string is: %s",rev);
}
