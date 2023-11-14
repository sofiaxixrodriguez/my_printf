/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** like printf
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "include/myprintflib.h"

int check_flag(char c)
{
    char str[] = "diuoxXfFcsp%";
    int i = 0;

    while (c != str[i])
        i++;
    return (i);
}

int my_printf(const char *format, ...)
{
    int i = 0;
    int a = 0;
    int b = 0;
    va_list args;
    int (*fun_arr[])(args) = {sin_dec, sin_dec, unsin_dec, octal, hex_low,
                            hex_up, flt, flt, chars, strs, ptr_ad, perc};

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            a = check_flag(format[i + 1]);
            b = b + (*fun_arr[a])(args) - 2;
            i++;
        } else
            my_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (i + b);
}
