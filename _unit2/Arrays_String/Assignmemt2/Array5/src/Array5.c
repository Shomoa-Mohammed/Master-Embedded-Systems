/*
 ============================================================================
 Name        : Array4.c
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

	int a[100] , num , i,check =0;
	printf("Enter numbers of elements :");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched :");
	scanf("%d",&check);
	for(i=0;i<num;i++)
		{
			if(check==a[i])
			{
			  printf("Number found at the location =%d",i+1);
			}
		}
}
