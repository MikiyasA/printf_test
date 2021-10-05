#include "main.h"

/**
 * get_function - access function from function.c file
 * @x: character
 * Return: arr[i].f or NULL
 */
int (*get_function(char x))(va_list)
{
int i = 0;
spec arr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
{"d", print_d},
{"i", print_i},
{NULL, NULL}
};

while (arr[i].valid)
{
if (x == arr[i].valid[0])
return (arr[i].f);
i++;
}
return (NULL);
}
