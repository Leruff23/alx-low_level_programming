#include "main.h"

/**
 *_strlen_recursion - prints the lenght of a string using recursion
 *
 *@s: pointer that has the address of the string
 *
 *Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
int i = 0;


if (*s != 0)
{
i = _strlen_recursion(s + 1);
return (i++);
}
return (i);
}
