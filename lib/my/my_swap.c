/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** swap content of 2 ints
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
