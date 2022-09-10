/*
 ============================================================================
 Name        : HW3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Structure for complex number
struct Scomplex
{
	double Real;
	double Imaginary;

};

struct Scomplex Add(struct Scomplex A , struct Scomplex B)
{
	struct Scomplex sum;
	sum.Real=A.Real+B.Real;
	sum.Imaginary=A.Imaginary+B.Imaginary;

	return sum;

}
int main(void) {
	     setvbuf( stdout, NULL, _IONBF, 0 );
	     setvbuf( stderr, NULL, _IONBF, 0 );

	     struct Scomplex Num1 , Num2 ,r;
	     printf("Enter 1st complex Number \n");
	     printf("Enter Real :");
	     scanf("%lf",&Num1.Real);
	     printf("Enter Imaginary :");
	     scanf("%lf",&Num1.Imaginary);

	     printf("Enter 2nd complex Number \n");
	     printf("Enter Real :");
	     scanf("%lf",&Num2.Real);
	     printf("Enter Imaginary :");
	     scanf("%lf",&Num2.Imaginary);

	     r=Add(Num1,Num2);
	     printf("Sum = %.1f + %.1f i",r.Real,r.Imaginary);
}
