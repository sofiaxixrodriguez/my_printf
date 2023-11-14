/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int c_isalphanum(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int cnt = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (c_isalphanum(str[i]) == 0)
            cnt++;
        i++;
    }
    return (cnt);
}

char **my_str_to_word_array(char const *str)
{
    int a = 0;
    int b = 0;
    int i = 0;
    int cnt = count_words(str);
    char **array = malloc(sizeof(char *) * (cnt + 2));

    while (str[i] != '\0') {
        while (my_isalphanum(str[i]) == 0 && str[i] != '\0')
        i++;
        for (b = i; my_isalphanum(str[b]) == 1; b++);
        array[a] = malloc(sizeof(char) * (b - i + 2));
        for (b = 0; my_isalphanum(str[i]) == 1; i++) {
            array[a][b] = str[i];
            b++;
        }
        array[a][b] = '\0';
        a++;
    }
    array[a] = NULL;
    return (array);
}
