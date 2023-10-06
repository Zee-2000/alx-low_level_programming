#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char:%c byte \n", sizeof(char));
printf("Size of an int: %d bytes \n", sizeof(int));
printf("Size of a long integer: %zu bytes \n", sizeof(long int));
printf("Size of long long integer: %zu bytes \n", sizeof(long long int));
printf("Size of float: %f bytes \n", sizeof(float));
return (0);
}
