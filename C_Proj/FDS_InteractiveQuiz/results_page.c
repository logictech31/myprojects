/*
 *	File name: results_page.c
 *	Description: Shows the result to the user.
 *	Authors: Amaan Shaikh, Mansi Mulik, Anish Panwala and Hrushikesh Pandit
 *	(c) 2020 A.M.H.A.
 */
#include <stdio.h>
#include <unistd.h>
#include "header_for_quiz.h"

// Function name: results()
// Description: Prints results
// @param [in] result of user
int results(int res)
{
	int chs;
	char ch;
	
	// Takes interval of 2 seconds
	sleep(2);

	// Depending upon the result, the following texts will be displayed
	if(res == 10)
	{
		// if result is 10
		printf("OUTSTANDING! ");
	}
	else if((res < 10) && (res >= 7))
	{
		// if result is less than 10 but greater than or equal to 7
		printf("Bravo! ");
	}
	else if((res < 7) && (res >= 4))
	{
		// if result is less than 7 but greater than or equal to 4
		printf("Great! ");
	}
	else
	{
		// if result is lower than 4
		printf("Better Luck next time! ");
	}


	// Now the result is shown
	printf("Your score is %d out of 10!\n\n", res);
	printf("\nDo you want to take the Quiz again? (Y/N)\nYour Choice:");
	scanf("%d", &chs); // this gets ignored for some reason
	// Y/N gets accepted depending on user's choice
	scanf("%c", &ch); 

	if((ch == 'Y') || (ch == 'y'))
	{
		// if the user chooses to attempt the quiz again, main() function
		// is called to start quiz again
		printUnderScore();
		printf("\n");
		printUnderScore();
		printf("\n");
		// start_quiz() function gets called to start the quiz again.
		start_quiz();
	}
		else if((ch == 'N') || (ch == 'n'))
		{
			// else if user chooses 'N/n', 
			//the program stops after showing the credits
printf("\n================================================================================\n"
					"|\t\t\tThank You For Playing the Quiz \t\t\t\t|\n"
		     "|\t\tThis quiz is made by students from SYCO WPU \t\t\t|\n"
		           "|\t\t\t\tCourse Outcomes: \t\t\t\t|\n"
   "|  Use of Data Structures, Teamwork, Pressure handling and Trusting each other. |\n"
	"|===============================================================================|\n"
					"\t\t\t\t     Made by- \n"
					"\t\t\t\t  Mansi Mulik(16)\n"
					"\t\t\t\tHrushikesh Pandit(18)\n"
					"\t\t\t\t  Anish Panwala(20)\n"
					"\t\t\t\t  Amaan Shaikh(28)\n");
printf("\n---------------------------------------------------------------------------------\n");
		}
		else
		{
			// if the user enters option other than Y/N or y/n
			// the program makes them wait for 1 minute
			printf("\nSeems like you're trying to go against the rules. \n");
			printf("Now wait for 1 minute.\n");
			sleep(60);
		}

	return 0;
}
//EOF