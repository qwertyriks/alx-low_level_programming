#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase,
 * except q and e
 * Return: 0 (Success)
 */
int main(void)
{	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	if (lowercase != 'q' && lowercase != 'e')
	{
	putchar(lowercase);
	}
	lowercase++;
	}
	putchar('\n');
	return (0);
}
