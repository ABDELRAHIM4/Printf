#include "main.h"
#include <stdarg.h>

/**
 * printch - print characters
 * @p: The argument
 *
 * Return: The number of characters that were printed
 */
int printch(va_list p)
{
char v = va_arg(p, int);

return (putchar(v));
}
