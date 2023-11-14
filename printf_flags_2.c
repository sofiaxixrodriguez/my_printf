/*
** EPITECH PROJECT, 2023
** flags for myprintf
** File description:
** flags 2/--
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int perc(va_list args)
{
    int i = 1;

    my_putchar('%');
    return (i);
}

int hex_low(va_list args)
{
    int n = va_arg(args, int);
    int y;
    int num = n;
    int a;
    int i = 0;
    char str[100];

    while (num != 0) {
        y = num % 16;
        if (y > 10) {
            str[i] = y + 87;
        } else
            str[i] = y + 48;
        num = num / 16;
        i++;
    }
    my_revstr(str);
    a = my_putstr(str);
    return (a);
}

int hex_up(va_list args)
{
    int n = va_arg(args, int);
    int y;
    int num = n;
    int a;
    int i = 0;
    char str[100];

    while (num != 0) {
        y = num % 16;
        if (y > 10) {
            str[i] = y + 55;
        } else
            str[i] = y + 48;
        num = num / 16;
        i++;
    }
    my_revstr(str);
    a = my_putstr(str);
    return (a);
}

int ptr_ad(va_list args)
{
    int *num = (va_arg(args, void *));
    unsigned int **ad = &num;
    int a;

    my_putstr("0x");
    a = my_put_hex(ad);
    return (a + 2);
}
