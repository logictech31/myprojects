/*
 *	Filename: storeqna.c
 *	Description: Stores question and answers in a file
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala
 *	(c) 2020 A.M.H.A
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header_for_quiz.h"


int main(int argc, char const *argv[])
{
	node a;
	// File pointer, makes stream of file.
	FILE *fp;
	// To enter choice of entering questions of difficulty
	int ch = 0;
	// To count how many times the loop will run
	int i;
	// To enter choice if user wants to enter more questions
	char choice;
	// This gets ignored by the compiler and is entered as "\n"
	char hi[5];
	// here head gets the address of variable 'a' of type node.
	head = &a;
//=============================================//
do
{
start:	printf("Of what difficult level are you entering the questions for?\n"
		"1. Easy\t\t2. Medium\t\t3. Hard\nYour Choice:");

	scanf("%d", &ch);
// The following 'if' condition is for preventing exploit of program run.
	if((ch > 3) || (ch < 1))
	{
		printf("\n\nThere are only 3 options."
				" No joking around.\n");
		goto start;
	}
	else
	{
			// the member 'next' gets address of newly
			// allocated memory	
			head->next = malloc(1 * sizeof(node));
	
			fflush(stdin);
			fflush(stdout);
			rewind(stdin);
			// Gets ignored for some reason
			gets(hi);
			
			// Start to store data related to question
			printf("\nEnter Question: ");
			gets(head->b.qstn);
			
			printf("\nEnter Option 1: ");
			gets(head->b.o1);
			
			printf("\nEnter Option 2: ");
			gets(head->b.o2);
				
			printf("\nEnter Option 3: ");
			gets(head->b.o3);
			
			printf("\nEnter Option 4: ");
			gets(head->b.o4);
				
			printf("\nEnter Correct Option: ");
			scanf("%d", &head->b.answr);
			// End to store data related to question

			fflush(stdin);
			fflush(stdout);
		if(ch == 1)
		{
			fp = fopen("easy.txt", "a");
		}
		else if(ch == 2)
		{
			fp = fopen("medium.txt", "a");
		}
		else
		{
			fp = fopen("hard.txt", "a");
		}
//=============================================//

		if(fp == NULL)
		{
			printf("\n\n\t\tError Opening file.\t\t\n\n");
			return 1;
		}
		else
		{
			fwrite(&(head->b), sizeof(head->b), 1, fp);

			fclose(fp);
		}
		// head gets address of the next allocated node
		head = head->next;
		head->next = NULL;
	}
	printf("\nDo you want to enter more questions?\n(Y/N): ");
	scanf("%c", &choice); // gets ignored
	scanf("%c", &choice);
}
while((choice == 'Y') || (choice == 'y'));
	// File gets closed
	fclose(fp);


	return 0;
}
//EOF
