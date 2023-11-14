/*
** EPITECH PROJECT, 2023
** my_numlen
** File description:
** length of number
*/

int my_numlen(int a)
{
    int i = 0;

    while (a != 0) {
        a = a / 10;
        i++;
    }
    return (i);
}
