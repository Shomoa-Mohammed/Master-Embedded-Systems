/*
 ============================================================================
 Name        : HW4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Sstudent
{
	char name [50];
	int Roll_no;
	float marks;

};

int main(void) {

	     setvbuf( stdout, NULL, _IONBF, 0 );
	     setvbuf( stderr, NULL, _IONBF, 0 );

	     struct Sstudent data[10];
	     unsigned short i;
	     printf("Enter information of student :\n");
	     for(i=0;i<10;i++)
	     {

	    	 printf("For roll number %d \n",i+1);
	    	 printf("Enter Name : ");
	    	 gets(data[i].name);
	    	 fflush(stdin);
	    	 printf("Enter Marks :");
	    	 scanf(" %f ",&data[i].marks);

	     }

	     printf("Display information of student :\n");
	          for(i=0;i<10;i++)
	          {
	         	 printf("Information for roll number %d ",i+1);
	         	 printf("Name :%c\nMarks :%f",&data[i].name,&data[i].marks);
	          }
}
