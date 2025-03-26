/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_evil_str
*/

#include "cpool.h"

char *my_evil_str(char *str)
{
    int l = 0;
    int r = my_strlen(str) - 1;
    char temp;

    while (l < r) {
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    return str;
}
