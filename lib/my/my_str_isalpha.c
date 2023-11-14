/*
** EPITECH PROJECT, 2023
** my_str_isalpha
** File description:
** check if str is only letters
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int res = 1;

    while (str[i] != '\0') {
        if ((str[i] < 65 || str [i] > 90) && (str[i] < 97 || str [i] > 122))
            res = 0;
        i++;
    }
    return (res);
}
