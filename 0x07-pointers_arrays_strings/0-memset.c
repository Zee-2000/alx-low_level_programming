#include "main.h"
/**
* _memset - a function that fills memory with a constant byte
* @s: char
* @b: char
* @n: int
* Return: a pointer to memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
      
}
return s;
=======
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
>>>>>>> 78e3a6833f93fbefa631e11ed16f0e9d765c5cb4
}
