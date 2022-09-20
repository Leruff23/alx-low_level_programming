 #include "main.h"

 /**
 *puts2 - prints every chararacter of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
int i = 0;

 while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar (*(str + i));
i++;
}

putchar (10);

}
