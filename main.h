#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct format_sp - a structure to store characters and function pointers
 * @c: the characters
 * @fun_pointer: the function pointer
 */
typedef struct format_s
{
	char c;
	int (*fun_pointer)(va_list);
} specifier_t;

int prnt_character(va_list args);
int prnt_string(va_list args);
int print_nbr(va_list args);
int print_uns_nbr(va_list args);
int mod(va_list args);
int binary(va_list args);
int octal(va_list args);
int hexa(va_list args);
int hexaup(va_list args);
int non_printable(va_list args);
int pointer_address(va_list args);
int revers(va_list args);
int rot13(va_list args);
int _printf(const char *format, ...);

#endif

