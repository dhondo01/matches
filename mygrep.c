/*
File: mygrep.c
Author: Dorjee Dhondup
Date: March 11, 2016
Description: This C program takes just one string and a list of files from the command-line
             and prints the file name followed by a colon, followed by the line where the pattern occurs.
*/



#include <stdio.h> /* This header file defines input/output routines */
#include <string.h> /* cstring library: collection of fuctions for string manipulation */
#include "lookInFile.h"

int main(int argc, char *argv[]) {
/* int main() is the main function where the program execution begins */

	int k;

	if (argc < 3) {
		/* usage statement error */
		printf("usage: count pattern file1 file2 file3...\n");
	}

	char* pattern = argv[1];
	char* filename;

	for (k = 2; k < argc; k++) { // k = 2, if only file
		/* $ mygrep c *.c */
		// printf("%s", pattern);
		filename = argv[k];
		lookInFile(filename, pattern);
	}

	return 0; /* terminates the main() function */
}
