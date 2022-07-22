/*
 ============================================================================
 Name        : Task6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num , sum =0;
	agin: printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&num);
	if (num >0)
	 {
		for(int i =0;i<=num;i++)
		{
			sum+=i;
		}
	    printf("sum = %d",sum);
	 }
	else
	{
		printf("this is negative number \n");
	    goto agin;
	}
}
