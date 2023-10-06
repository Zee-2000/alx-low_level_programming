#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of integer:%d byte \n", sizeof(int));
printf("Size of Character: %c bytes \n", sizeof(char));
printf("Size of float: %f bytes \n", sizeof(float));
printf("Size of Double: %zu bytes \n", sizeof(double));
printf("Size of unsigned integer: %zu bytes \n", sizeof(unsigned int));
return (0);
}
