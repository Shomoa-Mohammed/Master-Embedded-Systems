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
	setvbuf( stdout, NULL, _IONBF, 0 );
	setvbuf( stderr, NULL, _IONBF, 0 );

	int num, factorial;

	printf("enter an positive integer :");
	scanf("%d",&num);
	factorial=fact(num);
	printf("factorial  of %d = %d",num,factorial);

}
int fact(int n)
{
  int m=1;
  if(n>=1)
  {
	 m=(fact(n-1)*n);
  }
return m;
}
