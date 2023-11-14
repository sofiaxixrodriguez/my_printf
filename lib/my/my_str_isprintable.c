/*
** EPITECH PROJECT, 2023
** my_str_isprintable
** File description:
** check if str is only printable chars
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int res = 1;

    while (str[i] != '\0') {
        if (str[i] < 32 || str [i] > 126)
            res = 0;
        i++;
    }
    return (res);
}
