/*
** EPITECH PROJECT, 2023
** my_isneg
** File description:
** checks if int is neg or pos
*/

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
