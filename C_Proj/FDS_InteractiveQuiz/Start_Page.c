/*
 *	File name: Start_Page.c
 *	Description: This is where the quiz starts.
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala
 *	(c) 2020 A.M.H.A.
 */
#include <stdio.h>
#include "header_for_quiz.h"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	// start_quiz() function is called to start the quiz
	start_quiz();

	return 0;
}

// Function Name: start_quiz()
// Description: This is where the quiz starts
// No parameters passed.
int start_quiz()
{
	// variable difficulty is declared to store the difficulty of quiz
	int difficulty = 0;

	printf(" _______________________________________________________________________________\n"
			"|\t\t\t    Welcome to the C quiz   \t\t\t\t|\n"
            "|  The quiz has 5 very basic questions on the C Programming Language.           |\n"
            "|You get +2 points for each correct answer & -1 for each wrong/invalid answer. \t|\n"
			"|_______________________________________________________________________________|\n"
			"\n\t\tChoose your difficulty:\n"
			"\t\t\t1) Easy\n"
			"\t\t\t2) Medium\n"
			"\t\t\t3) Hard\n");
			printf("\nEnter your choice: ");
		// The following function makes a linked list in each index of 
		// the array
			readAllFiles();
			// reads the difficulty
re_enter:	scanf("%d", &difficulty);

	if(difficulty == 1)
	{
		// easyq() function gets called
		easyq();
	}
	else if(difficulty == 2)
	{
		// mediumq() function gets called
		mediumq();
	}
	else if(difficulty == 3)
	{
		// hardq() function gets called
		hardq();
	}
	else
	{
		printf("\nSorry didn't get you. Please re-enter.");
		goto re_enter;
	}

	return 0;
}

// Function Name: readAllFiles();
// Description: This function reads all the files which have the questions
// answers and options. In this case, the function will create a linked list
// of 'easy.txt', 'medium.txt' and 'hard.txt'.
// No parameteres are passed.
int readAllFiles()
{
	int i;
	FILE *fp;
	int end;

// Worst case time complexity of this loop is O(n)
for(i = 0; i < 3; i ++)
{
	end = 1;
	// pointer head gets the address of array head1's index 0
	head = &head1[i];
	if(i == 0)
	{
		// reads the contents from easy.txt and stores in head1[0]
		fp = fopen("easy.txt","r+");

	}
	else if(i == 1)
	{
		// reads the contents from medium.txt and stores in head1[1]
		fp = fopen("medium.txt","r+");
	}
	else if(i == 2)
	{
		// reads the contents from hard.txt and stores in head1[2]
		fp = fopen("hard.txt","r+");
	} 
		while(end > 0)
		{
			// this loop ends after 'end' gets value equal to or less than 0
			end = fread(&head->b, sizeof(head->b), 1, fp);
			// head1's i'th index's member node gets address of 
			// the new allocated memory
			if(end > 0)
			{
				head->next = malloc(1 * sizeof(node)); 
				// head gets address of the next node
				head = (node *)head->next;
			}
		}
		// After the end of file is reached,
		// member 'next' gets value NULL.
		head->next = NULL;
}

	fclose(fp);

	return 0;
}

// Function name: printUnderScore()
// Description: Prints Underscore just for decoration.
// No paramaters passed
int printUnderScore()
{
printf("______________________________________________________________________________");

	return 0;
}
//EOF