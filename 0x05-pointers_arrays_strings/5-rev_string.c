#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: void
**/
void rev_string(char *s)
{
int i = 0;
int j = 0;
char rev;
while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
rev = s[i];
s[j] = s[i];
s[i] = rev;
j++;
i--;
}

}
