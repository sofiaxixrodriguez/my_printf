/*
** EPITECH PROJECT, 2023
** my_strupcase
** File description:
** make every letter in a str into uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 96 && str[i] < 123)
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
