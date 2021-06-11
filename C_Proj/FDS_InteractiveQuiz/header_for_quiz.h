/*
 *	File name: header_for_quiz.h
 *	Description: Header for quiz
 *	Authors: Amaan Shaikh, Mansi Mulik, Hrushikesh Pandit and Anish Panwala
 *	(c) 2020 A.M.H.A
 */

#ifndef __HEADER_FOR_QUIZ_H__
#define __HEADER_FOR_QUIZ_H__

// Struct name: _quiz
// Description: Contains quiz's questions/ options and correct answer
typedef struct _quiz
{
	char qstn[256];
	int answr;
	char o1[80];
	char o2[80];
	char o3[80];
	char o4[80];
}quiz; 

// Struct name: _node
// Description: Makes a linked list of question
typedef struct _node 
{	
	quiz b;
	struct node *next; // contains next address
}node;
int printUnderScore();

// Used in storeqna.c
// and in printQnA
// Used to traverse in linked list.
node *head;
// Used in Intro_Page.c 
// in this head1[0] gets contents of easy.txt
// in head1[1], info of medium.txt gets stored
// in head1[2], info of hard.txt gets stored
node head1[3]; 
//---------------------------------------------//

int start_quiz();
int readAllFiles();

int printQnA(node *head);
// This structure reads and writes data in 
// all the files in which it is included in

/*
	You don't have to double declare
	any of the variables declared in this
	header file.

	You only have to declare a struct variable
	THAT shows all the questions, options and compares
	answers.

	// DECLARE THESE VARIABLES IN YOUR PROGRAM!:
	// quiz (variable_name);
	// FILE *fp

	Note: Please refer to -> easyq.c
*/

int easyq();
int mediumq();
int hardq();
int results(int res);
#endif
//EOF