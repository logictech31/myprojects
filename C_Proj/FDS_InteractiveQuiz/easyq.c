/*
 *	File name:	easyq.c
 *	Description: Takes Test with easy questions.
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala
 *	(c) 2020 A.M.H.A.
 */

#include <stdio.h>
#include <stdlib.h>
#include "header_for_quiz.h"

// Function name: easyq()
// Description: Takes quiz of easy questions
// No parameters passed
int easyq()
{
	// user_result is initialised to store user's result
	int user_result = 0;

	printUnderScore();

	// printQnA function gets the address of head1[1] and assigns it to head
	// along with the choice
	// head1[0] contains info of easy.txt
	user_result = printQnA(&head1[0]);
	
	printf("\nLoading Results...\n\n\n");

	// User's result is passed to function result()
	results(user_result);

	return 0;
}


// Function name printQnA
// Description: Prints all the questions and options. 
// @param [in] node* head
int printQnA(node *head)
{
	int ans;
	// this variable is declared to print the question number
	int i = 1;
	int user_result = 0;

		// loop stops when end of file or when member 'next' has value NULL
		// Worst case time complexity is O(n-1) where n is number of nodes
		// it is O(n-1) because it won't print last node as
		// it contains value NULL.
		while(head->next != NULL)
		{

			printf("\n\n%d)%s", i, (head->b.qstn));

			printf("\n1. %s", (head->b.o1));

			printf("\t\t2. %s", (head->b.o2));

			printf("\n3. %s", (head->b.o3));

			printf("\t\t4. %s\n\nYour Choice: ", (head->b.o4));
			
			scanf("%d", &ans);


			// Checks if the answer is correct or wrong
			if(ans != (head->b.answr))
			{
				// if wrong, then prints the following message
				printf("Wrong Answer!"
					" The correct answer is %d", (head->b.answr));
				printf("\n");
				// and user's score is decremented by 1.
				user_result--;
			}
			else
			{
				// if answer is correct, user's score is incremented by 2
				user_result += 2;
			}
			// value is incremented because we go to next question
			i++;
			// head gets value of next node
			head = (node *)head->next;
			// Prints a lot of UnderScores just for the sake of looks
			printUnderScore();
		}

	return user_result;
}
//EOF