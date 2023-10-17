#include "main.h"
#include <stddef.h>

/**
*_fun - selects the functions output according to a format
* @c: The specified format
* @va-list: The specified format
* Return: The function to be used
*/
int (*_fun(char c))(va_list)
{
if (c == 'c')
return (_printc);
if (c == 's')
return (_prints);

return (NULL);
}
