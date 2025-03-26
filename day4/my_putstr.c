/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_putstr
*/

#include "cpool.h"

int my_putstr(char const *str)
{
    while (*str) {
        my_putchar(*str);
        *str++;
    }
}
