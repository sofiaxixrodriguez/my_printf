/*
** EPITECH PROJECT, 2023
** my_putfloat
** File description:
** my_putfloat
*/

int my_putfloat(float nb)
{
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
