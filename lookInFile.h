/*
File: lookInFile.h
Author: Dorjee Dhondup
Date: March 11, 2016
Description: This is the header file with a function definition called "lookInFile" that is
             given a string called filename and a string called pattern to look for in the file.
*/

#ifndef lookInFile_h
#define lookInFile_h

/* function prototype: provides the name of the function, the number
of arguments given to the function, and the type of each argument.
It also provides the return type of the function. */

#include <stdio.h> /* This header file defines input/output routines */
#include <string.h> /* cstring library: collection of fuctions for string manipulation */


void lookInFile(char* filename, char* pattern);



#endif
