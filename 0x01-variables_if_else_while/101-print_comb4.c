#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int nf, ms, lt;

for (nf = 48; nf < 58; nf++)
{
for (ms = 49; ms < 58; ms++)
{
for (lt = 50; lt < 58; lt++)
{
if (lt > ms && ms > nf)
{
putchar(nf);
putchar(ms);
putchar(lt);
if (nf != 55 || ms != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
