/*
 *	File name:	hardq.c
 *	Description: Takes Test with hard questions.
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala.
 *	(c) 2020 A.M.H.A.
 */

#include <stdio.h>
#include <stdlib.h>
#include "header_for_quiz.h"

// Function name: hardq()
// Description: Takes quiz of hard questions
// No parameters passed
int hardq()
{
	int user_result = 0;

	// printQnA function gets the address of head1[2] and assigns it to head
	// along with the choice
	// head[2] contains info from hard.txt
	user_result = printQnA(&head1[2]);
	
	printf("\nLoading Results...\n\n\n");

	// User's result is passed to function result()
	results(user_result);

	return 0;
}
//EOF