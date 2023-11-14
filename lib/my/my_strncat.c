/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** concat str and n chars from str2
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (a < nb) {
        dest[i] = src[a];
        i++;
        a++;
    }
    dest[i + 1] = '\0';
    return (dest);
}
