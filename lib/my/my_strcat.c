/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** concat 2 strs
*/
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        i++;
        a++;
    }
    dest[i + 1] = '\0';
    return (dest);
}
