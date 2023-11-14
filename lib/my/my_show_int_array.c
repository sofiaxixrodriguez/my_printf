/*
** EPITECH PROJECT, 2023
** my_show_int_array
** File description:
** print int array
*/

int my_show_int_array(int *tab, int n)
{
    int i = 0;

    while (i < n) {
        my_put_nbr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
