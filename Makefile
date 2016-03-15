# File: Makefile
# Author: Dorjee Dhondup
# Date: March 11, 2016
# Description: This is the Makefile for the project. Makefile is a way to organize code compilation.

mygrep: mygrep.o lookInFile.o # mygrep is dependent on .o files
	gcc -o mygrep mygrep.o lookInFile.o

mygrep.o: mygrep.c lookInFile.h
	gcc -c mygrep.c 

lookInFile.o: lookInFile.c lookInFile.h
	gcc -c lookInFile.c


# Clean up
clean:
	rm *.o
	rm mygrep


# Running the match program on unix machine:

# dhondo01@ubuntu:$ make
# gcc -c mygrep.c 
# gcc -c lookInFile.c
# gcc -o mygrep mygrep.o lookInFile.o

# dhondo01@ubuntu:$ make
# gcc -c mygrep.c 
# gcc -c lookInFile.c
# gcc -o mygrep mygrep.o lookInFile.o
