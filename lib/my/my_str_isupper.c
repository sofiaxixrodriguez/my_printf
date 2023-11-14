/*
** EPITECH PROJECT, 2023
** my_str_isupper
** File description:
** check if all chars in an str are upcase letters
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int res = 1;

    while (str[i] != '\0') {
        if (str[i] < 65 || str [i] > 90)
            res = 0;
        i++;
    }
    return (res);
}
