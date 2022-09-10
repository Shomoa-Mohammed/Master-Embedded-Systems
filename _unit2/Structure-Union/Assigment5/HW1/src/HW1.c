/*
 ============================================================================
 Name        : HW1.c
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
	int roll_no;
	float mark;

};

void print(struct Sstudent s)
{
	printf("Display information \n");
	printf("name : %s \nRoll : %d \nMarks : %.2f",s.name,s.roll_no,s.mark);

}


int main(void) {
	     setvbuf( stdout, NULL, _IONBF, 0 );
	     setvbuf( stderr, NULL, _IONBF, 0 );

	     struct Sstudent s;
	     printf("Enter information of student  \n");
	     printf("Enter name:");
	     scanf("%s",&s.name[0]);
	     printf("Enter roll number :");
	     scanf("%d",&s.roll_no);
	     printf("Enter marks:");
	     scanf("%f",&s.mark);

	     print(s);
}
