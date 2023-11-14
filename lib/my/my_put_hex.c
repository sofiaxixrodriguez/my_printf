/*
** EPITECH PROJECT, 2023
** my_put_hex
** File description:
** my_put_hex
*/

int my_put_hex(int n)
{
    int y;
    int num = n;
    int a;
    int i = 0;
    char str[100];

    while (num != 0) {
        y = num % 16;
        if (y > 10) {
            str[i] = y + 87;
        } else
            str[i] = y + 48;
        num = num / 16;
        i++;
    }
    my_revstr(str);
    a = my_putstr(str);
    return (a);
}
