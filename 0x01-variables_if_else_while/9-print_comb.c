#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program that prints all possible combinations of
 * single-digit numbers followed by a NEW LINE
 * in ascending order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		{
			putchar(num + '0');
			if (num != 9) {
			putchar(',');
			putchar(' ');
			}
		}
	return (0);
}
