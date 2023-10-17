#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _printc(va_list p);
int _printi(va_list p);
int _prints(va_list p);
int (*_fun(char c))(va_list);

#endif /* MAIN_H */
