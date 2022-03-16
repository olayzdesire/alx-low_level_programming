#include "main.h"

/**
* main - Prints alphabets, then new line
*
* Return: 0
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
