/*
** EPITECH PROJECT, 2023
** my_put_nbr_long
** File description:
** my_put_nbr_long
*/

int my_put_nbr_long(long long nb)
{
    long long a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
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
