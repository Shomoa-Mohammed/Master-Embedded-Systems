/*
 ============================================================================
 Name        : Array3.c
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

	int a [50][50] , r, c;
	int t[50][50];
	int i,j;
	printf("Enter rows and column of matrix :");
	scanf("%d",&r);
	scanf("%d",&c);

	printf("Enter elements of matrix :\n");
	for(i=0;i<r;i++)
	 {
		for(j=0;j<c;j++)
		{
			printf("Enter elements a%d%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	 }

	printf("Entered matrix :\n");
	for(i=0;i<r;i++)
		 {
			for(j=0;j<c;j++)
			{
				printf("%d  \t",a[i][j]);

			}
			printf("\r\n");
		 }
	printf("Transpose of matrix :\n");
	for(i=0;i<c;i++)
		 {
			for(j=0;j<r;j++)
			{
				t[i][j]=a[j][i];
			}
		 }

	for(i=0;i<c;i++)
		 {
			for(j=0;j<r;j++)
			{
				printf(" %d \t",t[i][j]);

			}
			printf("\r\n");
		 }
}
