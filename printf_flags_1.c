/*
** EPITECH PROJECT, 2023
** flags for myprintf
** File description:
** flags 1/--
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int sin_dec(va_list args)
{
    int i;

    i = my_put_nbr(va_arg(args, int));
    return (i);
}

int unsin_dec(va_list args)
{
    unsigned int a;
    unsigned int nb = va_arg(args, int);

    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    a = my_numlen(nb);
    return (a);
}

int octal(va_list args)
{
    int n = va_arg(args, int);
    int y;
    int num = n;
    int nb = 0;
    int mul = 1;
    int a;

    while (num != 0) {
        y = num % 8;
        y = y * mul;
        nb = nb + y;
        mul = mul * 10;
        num = num / 8;
    }
    a = my_put_nbr(nb);
    return (a);
}

int chars(va_list args)
{
    int i = 1;

    my_putchar(va_arg(args, char *));
    return (i);
}

int strs(va_list args)
{
    int i;

    i = my_putstr(va_arg(args, char *));
    return (i);
}
