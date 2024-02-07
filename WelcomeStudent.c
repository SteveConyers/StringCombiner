/* WelcomeStudent.c by Steven Conyers
Created: 3/30/2021
Updated: 2/7/2021 */

#include <stdio.h>
#include <string.h>

#include "fixgets.h"  //Included in repository and needed for program

int main(void)
{
/* Declarations */
  char first[11] 		= {'\0'};
	char middle[2] 		= {'\0'};
	char last[16]  		= {'\0'};
	char student[7]		= {'\0'};
	char school[21]		= {'\0'};
	char password[11] 	= {'\0'};
	char nameOutput[73] = {'\0'};
/*------------------------------------------------------------------------------*/
/* Heading */
	printf ("Welcome Student Application by Steven Conyers\n\n\n");
/*------------------------------------------------------------------------------*/
/* Input section */	
	printf("First Name?              ");
	fixgets(first, 11, stdin); 
	printf("\n");
	
	printf("Middle Initial?          ");
	fixgets(middle, 2, stdin);
	printf("\n");
	
	printf("Last Name?               ");
	fixgets(last, 16, stdin);
	printf("\n");
	
	printf("Student Number?          ");
	fixgets(student, 7, stdin);
	printf("\n");
	
	printf("Name of High School?     ");
	fixgets(school, 21, stdin);
	printf("\n\n\n");
/*------------------------------------------------------------------------------*/
	 /* beginning value */
	strcpy(nameOutput, "Welcome to MCC, ");
	
	/* concatenation */
	strcat(nameOutput, first);
	strcat(nameOutput, " ");
	strcat(nameOutput, middle);
	strcat(nameOutput, ".");
	strcat(nameOutput, " ");
	strcat(nameOutput, last);
	strcat(nameOutput, " ");
	strcat(nameOutput, "#");
	strcat(nameOutput, student);
	strcat(nameOutput, " ");
	strcat(nameOutput, "from");
	strcat(nameOutput, " ");
	strcat(nameOutput, school);
	strcat(nameOutput, "!");
/*------------------------------------------------------------------------------*/
	/* String output*/
	printf("%s\n\n", nameOutput);
/*------------------------------------------------------------------------------*/
	/* String data manipulation */
  password[0] = strlwr(first)[0];
	password[1] = strlwr(first)[2];
	password[2] = strlwr(first)[3];
	password[3] = strlwr(last)[0];
	password[4] = strlwr(last)[2];
	password[5] = strlwr(last)[5];
	password[6] = student[2];
	password[7] = student[3];
	password[8] = student[4];
	password[9] = student[5];
	password[10] = '\0'; // null terminator
/*------------------------------------------------------------------------------*/
/* String manipulation output */
	// Password is comprised of first, third and fourth letters of first name, followed by first, third and fifth letters of the last name, then followed by last digits the of student ID
	printf("Your password is %s\n", password); 
	
	return 0;
}
