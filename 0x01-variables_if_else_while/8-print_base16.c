#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int man(void)

{
char base_16;

for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}

putchar ('\n');

return (0);

}