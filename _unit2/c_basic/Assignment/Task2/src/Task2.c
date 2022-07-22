/*
 ============================================================================
 Name        : Task2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter an alphabet :");
	fflush(stdout);
	scanf("%c",&c);
	switch(c)
	{
	case 'a':
		printf("%c is a vowel",c);
		break;
	case 'e':
		printf("%c is a vowel",c);
		break;
	case 'i':
			printf("%c is a vowel",c);
			break;
	case 'o':
			printf("%c is a vowel",c);
			break;
	case 'u':
			printf("%c is a vowel",c);
			break;
	default :
		   {
			   printf("%c is a constant",c);
		   }
		 break;





	}

}
