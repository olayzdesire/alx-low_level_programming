#include <stdio.h>
/**
 * main -  prints all alphabets in reverse 
 * Description: using putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
