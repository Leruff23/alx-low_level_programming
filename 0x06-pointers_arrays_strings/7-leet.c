#include "main.h"

/**
 *leet - leet encoder
 *@str: string to be encoded
 *
 *Return: Adress of the encoded string
 */

char *leet(char *str)

{

int a = 0, b = 0, l = 5;
char r[5] = {'A', 'E', 'O', 'T', 'L'};
char n[5] = {'4', '3', '0', '7', '1'};

while (str[a])
{
b = 0;

while (b < l)

{
if (str[a] == r[b] || str[a] - 32 == r[b])
{
str[a] = n[b];
}

b++;
}

a++;
}

return (str);
}
	     
