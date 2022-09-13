#include <stdio.h>
/**
 * main - Use `putchar` to print all letters but the letter 'q' and 'e'
 * Return: 0
 */
int main(void)
{
char aToz;
for (aToz = 'a'; aToz <= 'z'; aToz++)
{
if (aToz != 'q' && aToz != 'e')
putchar(aToz);
}
putchar('\n');
return (0);
}
