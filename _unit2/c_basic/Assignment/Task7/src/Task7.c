/*
 ============================================================================
 Name        : Task7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num , fact =1;
	agin: printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&num);
	if (num >0)
	 {
		for(int i =1;i<=num;i++)
		{
			fact*=i;
		}
	    printf("factorial = %d",fact);
	 }
	else
	{
		printf("Error!!! factorial of negative number doesn't exist");

	}
}
