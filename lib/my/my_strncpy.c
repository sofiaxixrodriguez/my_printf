/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** cp n chars from an str into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int l = my_strlen(dest);

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    if (n > l) {
        dest[l] = '\0';
    }
    return (dest);
}
