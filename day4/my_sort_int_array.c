/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_sort_int_array
*/

#include <stdlib.h>

static void swap(int *array, int size, int i)
{
    int j;
    int temp;

    for (j = 0; j < size - i - 1; j++) {
        if (array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}

void my_sort_int_array(int *array, int size)
{
    int i;

    if (array == NULL || size <= 0) {
        return;
    }
    for (i = 0; i < size - 1; i++) {
        swap(array, size, i);
    }
}
