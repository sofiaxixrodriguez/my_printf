/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** check if num given is prime
*/

int    my_is_prime(int nb)
{
    int i = 2;

    if (nb < 1)
        return (0);
    if (nb == 2)
        return (1);
    while (nb % i != 0 && i != nb) {
        i++;
        if (nb % i != 0 || nb == 2) {
            return (1);
        } else {
            return (0);
        }
    }
}
