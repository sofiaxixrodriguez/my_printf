/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** raverse a str
*/

char *my_revstr(char *str)
{
    int i = 0;
    int l = my_strlen(str) - 1;
    char temp;

    while (i < l) {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
        i++;
        l--;
    }
    return (str);
}
