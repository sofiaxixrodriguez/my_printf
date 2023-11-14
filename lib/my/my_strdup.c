/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** allocate mem and cp str given as arg
*/
#include<stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int l = my_strlen(src) + 1;

    str = malloc(sizeof(char) * l);
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
    free(str);
}
