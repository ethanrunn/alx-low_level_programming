#include <stdio.h>
/**
 * main - * Use `putchar` to print lowercase andthen uppercase alphabet.
 * Return: 0
 */
int main(void)
{
char aToz;
char AtoZ;
for (aToz = 'a'; aToz <= 'z'; aToz++)
putchar(aToz);
for (AtoZ = 'A';, AtoZ <= 'Z'; AtoZ++)
putchar(AtoZ);
putchar('\n');
return (0);
}
