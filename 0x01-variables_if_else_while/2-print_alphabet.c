#include <stdio.h>
/**
 * main - Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
char aToZ;
for (aToZ = 'a'; aToZ <= 'z'; aToZ++)
putchar(aToZ);
putchar('\n');
return (0);
}
