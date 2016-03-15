/*
File: lookInFile.c
Author: Dorjee Dhondup
Date: March 11, 2016
Description: This C program is a separate source file with the implementation of lookInFile function inside it.
             The function should print each line that matches to standard output with the filename, a colon,
             and the matching line. The function does not need to return anything.
*/


#include "lookInFile.h"
#include <stdio.h>
#include <string.h>



/* two arguments: filename, pattern */
void lookInFile(char* filename, char* pattern) {

	printf("In lookInFile function \n");
	lookInFile("Hi, it's working so far. \n")

	// FILE* file = fopen(filename, "r");

	// int lines = 0;
	// int numChars = 0;
	// char line[maxLineLength];

	// int done = readLine(file,line);

	// while (done == 0) {
	// 	done = readLine(file,line);
	// 	lines++;
	// 	numChars = numChars + strlen(line);
	// }

	// printf("There were %d characters and %d lines in file %s.\n",numChars,lines,filename);
}