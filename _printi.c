#include "main.h"
#include <stdarg.h>

/**
* _print_char - prints characters
* @p: The argument
*
* Return: The number of characters that were printed
*/
int _print_char(va_list p)
{
char c = va_arg(p, int);

return (_putchar(c));
}
