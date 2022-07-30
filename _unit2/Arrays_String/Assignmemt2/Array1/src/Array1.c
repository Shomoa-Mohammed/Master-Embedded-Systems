/*
 ============================================================================
 Name        : Array1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//to buffer Eclipse
	setvbuf( stdout, NULL, _IONBF, 0 );
	setvbuf(stderr, NULL, _IONBF, 0);

	int a1 [2][2];
	int a2 [2][2];
	int i,j;//first matrix


	printf("Enter the elements of 1st matrix \n");
	for(i=0;i<2;i++)
	 {
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d :",i+1,j+1);
			scanf("%d",&a1[i][j]);
		}
	 }
   printf("\n");
   printf("Enter the elements of 2nd matrix \n");
   for(i=0;i<2;i++)
   	 {
   		for(j=0;j<2;j++)
   		{
   			printf("Enter b%d%d :",i+1,j+1);
   			scanf("%d",&a2[i][j]);
   		}
   	 }
   for(i=0;i<2;i++)
   	 {
   		for(j=0;j<2;j++)
   		{
   			a1[i][j]=a1[i][j]+a2[i][j];
   		}
   	 }
   printf("Sum Of matrix : \n");
   for(i=0;i<2;i++)
     	 {
     		for(j=0;j<2;j++)
     		{
     			printf("%d \t",a1[i][j]);
     		}
     	  printf("\r\n");
     	 }

}
