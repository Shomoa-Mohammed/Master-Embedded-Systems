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
#include <string.h>

int main(void) {
	    setvbuf( stdout, NULL, _IONBF, 0 );
		setvbuf( stderr, NULL, _IONBF, 0 );


		printf("Enter a sentence :");
		reverse();


}
void reverse()
{
    char t;
    scanf("%c",&t);
	if(t!='\n')
     {
	  reverse();
	  printf("%c",t);
     }
}











