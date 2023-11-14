/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** my_getnbr
*/

int c_isnum(char c)
{
    if (c < 48 || c > 57)
        return (0);
    return (1);
}

int get_num(char const *str, int i, int num)
{
    if (c_isnum(str[i]) == 1)
        num = num * 10 + (str[i] - 48);
    return (num);
}

int my_getnbr(char const *str)
{
    long num = 0;
    int neg = 1;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 45)
            neg = neg * (-1);
        if (c_isnum(str[i]) == 1 && c_isnum(str[i + 1]) == 0) {
            num = num * 10 + (str[i] - 48);
            return (num * neg);
        } else {
            num = get_num(str, i, num);
        }
        num = num * neg;
        if (num < -2147483648 || num > 2147483647)
            return (0);
        num = num * neg;
        i++;
    }
    return (num * neg);
}
