#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(const char *str);
char *_strcpy(char *dest, const char *source);
int _printf(const char *format, ...);
int printStr(const char *);
char* itostr(int);
typedef struct fmt_identifier
{
	char fmt_char;
	char *(*fmt_f)(char *, int, va_list);
} fmt_identifier;
char *c_handler(char *, int, va_list);
char *s_handler(char *, int, va_list);
char *i_handler(char *, int, va_list);


#endif /*_main_h_*/
