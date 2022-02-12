#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 * Print all the letters except q and e
 */
int main(void)
{
char alfb;

for (alfb = 'a'; alfb <= 'z'; alfb++)
{
if (alfb != 'e' && alfb != 'q')
{
putchar(alfb);
}
}
putchar('\n');
return (0);
}
