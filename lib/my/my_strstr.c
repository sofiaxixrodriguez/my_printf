/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** search for str2 in str1
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int b = 0;

    while (str[i] != to_find[b]) {
        i++;
    }
    return (&str[i]);
}
