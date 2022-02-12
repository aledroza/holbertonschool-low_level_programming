#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * You can only use putchar three times in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char chalfb;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (chalfb = 'a'; chalfb <= 'f'; chalfb++)
{
putchar(chalfb);
}
putchar('\n');
return (0);
}
