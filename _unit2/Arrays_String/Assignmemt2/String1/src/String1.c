/*
 ============================================================================
 Name        : String1.c
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

	      char text [100];
	      char f;
	      int i , count=0;
	      printf("Enter a string :");
	      gets(text);
	      printf("Enter a character to find frequency :");
	      scanf("%c",&f);
	      for(i=0;i<strlen(text);i++)
	       {
	    	  if(f==text[i])
	    	   {
	    		  count++;
	    	   }
	       }
	      printf("Frequency of e = %d" ,count);


}
