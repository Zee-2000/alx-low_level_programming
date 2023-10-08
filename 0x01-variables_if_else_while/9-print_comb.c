#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int u;
for (u = 0; u < 10; u++)
{
putchar(u + '0');
if (u < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
