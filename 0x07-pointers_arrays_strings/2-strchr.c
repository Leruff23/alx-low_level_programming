#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 *@s: pointer that contain the adress of the string
 *@c: character that need to be located
 *
 * Return: adress of the first occurence of c in the string
 */

char *_strchr(char *s, char c)
{

char *i = s;

while (*i != 0 && *i != c)
{

i++;
}
if (*i != c)
{
return (0);
}

return (i);
}
