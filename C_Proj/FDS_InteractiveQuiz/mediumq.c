/*
 *	File name:	mediumq.c
 *	Description: Takes Test with easy questions.
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala
 *	(c) 2020 A.M.H.A.
 */

#include <stdio.h>
#include <stdlib.h>
#include "header_for_quiz.h"

// Function name: mediumq()
// Description: Takes quiz of medium questions
// No parameters passed
int mediumq()
{
	int user_result = 0;
	
	// printQnA function gets the address of head1[1] and assigns it to head
	// along with the choice
	// head1[1] contains info of medium.txt
	user_result = printQnA(&head1[1]);
	
	printf("\nLoading Results...\n\n\n");

	// User's result is passed to function result()
	results(user_result);

	return 0;
}
//EOF