#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int q;
char v;
for (q = 0; q < 10; q++)
{
putchar(q + '0');

}
for (v = 'a'; v <= 'f'; v++)
{
putchar(v);
}
putchar('\n');
return (0);
}
