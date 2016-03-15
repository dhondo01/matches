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

int main(int argc, char const *argv[]) { /* main is the entry point of this program */
  /* */

  printf("%s\n", argc );

  return 0;
}
