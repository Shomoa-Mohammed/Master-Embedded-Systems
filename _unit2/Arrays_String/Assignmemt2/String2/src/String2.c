/*
 ============================================================================
 Name        : String2.c
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
     char length [50];
     int count =0,i=0;
     printf("Enter a string :");
     gets(length);
     while(length[i]!=0)
      {
    	 count++;
    	 i++;
      }
     printf("Length of String : %d",count);




}
