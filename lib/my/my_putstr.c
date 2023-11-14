/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** print strs
*/

int my_putstr(char const *str)
{
    int i = 0;
    int a;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    a = my_strlen(str);
    return (a);
}
