/*
 ============================================================================
 Name        : Task8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char op;
	float operand1 , operand2 ,result ;
	printf("Enter operator either + or  or * or divide :");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter operand 1 :");
	fflush(stdout);
	scanf("%f ",&operand1);
	printf("Enter operand 2 :");
	fflush(stdout);
	scanf("%f ",&operand2);

	switch(op)
	{
	  case '+' :
		  result = operand1+operand2;
		  printf("%f + %f = %f",operand1,operand2,result);
		  break;
	  case '-' :
		  result = operand1-operand2;
		  printf("%f - %f = %f",operand1,operand2,result);
		  break;
	  case '*' :
		  result = operand1*operand2;
		  printf("%f * %f = %f",operand1,operand2,result);
		  break;
	  case '/' :
		  result = operand1/operand2;
		  printf("%f / %f = %f",operand1,operand2,result);
		  break;



	}
}
