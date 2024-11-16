#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_nbr(int n);
int print_uns_nbr(unsigned int n);
int binary(unsigned int nb);
int octal(unsigned int n);
int hexa(unsigned int n);
int hexaup(unsigned int n);
int non_printable(char *c);
int pointer_address(void *);
#endif
