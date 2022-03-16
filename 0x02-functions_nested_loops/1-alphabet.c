#include "main.h"

/**
* main - Prints alphabets, then new line
* Description: uses for function
*/
void print_alphabet(void)
{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
}
