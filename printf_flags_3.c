/*
** EPITECH PROJECT, 2023
** flags for myprintf
** File description:
** flags 2/--
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int flt(va_list args)
{
    float nb = va_arg(args, double);
    int i;
    signed long full = nb;
    signed long decs = nb * 1000000;
    int res = 0;

    if (nb < 0.0) {
        my_putchar('-');
        full = full * -1;
        decs = decs * -1;
        res = 1;
    }
    decs = decs - (full * 1000000);
    res = res + my_put_nbr_long(full);
    my_putchar('.');
    res = res + my_put_nbr_long(decs);
    return (res + 1);
}
