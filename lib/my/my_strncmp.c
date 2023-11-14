/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** strcmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int res = 0;

    while (i <= n - 1) {
        if (s1[i] > s2[i] || s1[i] < s2[i]) {
            res = s1[i] - s2[i];
        }
        i++;
    }
    return (res);
}
