/*
** EPITECH PROJECT, 2023
** my_sort_int_array
** File description:
** Sort ints
*/

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int a;

    while (i < size -1) {
        if (array[i] > array[i + 1]) {
            a = array[i];
            array[i] = array[i + 1];
            array[i + 1] = a;
            i = 0;
        } else {
            i++;
        }
    }
}
