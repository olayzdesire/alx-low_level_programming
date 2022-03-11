#!/bin/bash
gcc -E $CFILE -o c  (Task0: Running a C file through preprocessor and saving output in another file) 
#!/bin/bash
gcc -c $CFILE  (Task1: Running a C file with a .c extension)
#!/bin/bash 
gcc -S $CFile (Task2: Running a C file with a .s extension) 
#!/bin/bash
gcc $CFILE -o cisfun (Task3: Creating an output file 'cisfun') 
#!/bin/bash
#include <stdio.h>

/**
* main - prints out the string
* Description: it uses the main function to print out a string
* Return: Always 0(Success)
*/
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
} (Task4) 

