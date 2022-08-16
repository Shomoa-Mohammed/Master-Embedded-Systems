/*
 ============================================================================
 Name        : Task4.c
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
			setvbuf( stderr, NULL, _IONBF, 0 );
			int base , power , pow;
			printf("Enter base number :");
			scanf("%d",&base);
			printf("Enter power number (positive integer):");
			scanf("%d",&power);
			pow=power_calc(base,power);
			printf("%d",pow);


}
int power_calc(int b , int p)
{
    int i=0;
	if(p!=0)

		return b*power_calc(b,p-1) ;

	else
		return 1;
}
