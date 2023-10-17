#include "main.h"
#include <stdarg.h>

/**
* _prints - produces output according to a format
*@p: The argument
*
* Return: The number of characters that were printed
*/
int _prints(va_list p)
{
int i = 0;
char *s = va_arg(p, char *);

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (0);
}
