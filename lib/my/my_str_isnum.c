/*
** EPITECH PROJECT, 2023
** my_str_isnum
** File description:
** check if str is only letters
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int res = 1;

    while (str[i] != '\0') {
        if (str[i] < 48 || str [i] > 57)
            res = 0;
        i++;
    }
    return (res);
}
