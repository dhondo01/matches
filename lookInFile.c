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
#include <stdlib.h> /* for malloc and exit */


/* two arguments: filename, pattern */
void lookInFile(char* filename, char* pattern) {

    
    // getline(): http://c-for-dummies.com/blog/?p=1112
    char *buffer; // pointer called buffer - copy char from a file
    size_t bufsize = 512;
    size_t characters;

	FILE* file = fopen(filename, "r");

    buffer = (char *)malloc(bufsize * sizeof(char));
    /* malloc: memory allocation, returns a void pointer */

    if( buffer == NULL) {
        perror("Unable to allocate buffer");
        exit(1);
    }

    characters = getline(&buffer,&bufsize,file); /* getline returns the numChars */
    // printf("%zu\n", characters);

    while (characters != -1) {
    	/* loop and half: process the buffer */
    	// printf("%s", buffer);
    	if (strstr(buffer, pattern)) {
    		/* code */
    		printf("%s:%s\n", filename, buffer); /* format string */
    	}

    	/* get the next line, hopefully */
    	characters = getline(&buffer,&bufsize,file);

    }

}