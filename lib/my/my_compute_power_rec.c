/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** calc power of w recusivity
*/

int my_compute_power_rec(int nb, int p)
{
    int res = 1;

    if (p < 0) {
        res = 0;
    } else if (p == 0) {
        res = 1;
    } else {
        res = nb * my_compute_power_rec(nb, p - 1);
    }
    return (res);
}
