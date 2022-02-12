#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
char alfb;

for (alfb = 'a'; alfb <= 'z'; alfb++)
{
putchar(alfb);
}
putchar('\n');
return (0);
}
