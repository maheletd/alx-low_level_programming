#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * this program prints
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');#
		return (0);
}
