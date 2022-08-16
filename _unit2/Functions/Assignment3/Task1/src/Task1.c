/*
 ============================================================================
 Name        : Task1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime_num(int n,int m)
{
	int i;
	printf("prime numbers between %d and %d are : \t",n,m);
	for(i=n;i<=m;i++)
	{
		if(!(i%2==0))
			printf("%d ",i);
	}
}
int main(void) {
	setvbuf( stdout, NULL, _IONBF, 0 );
	setvbuf( stderr, NULL, _IONBF, 0 );
	int num1 ,num2;
	printf("Enter two number (interval): ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	prime_num(num1,num2);

}
