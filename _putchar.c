#include <unistd.h>

/**
 * _putchar - print output
 * @c: character
 * Return: output
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
